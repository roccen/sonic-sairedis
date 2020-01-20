#pragma once

extern "C" {
#include "sai.h"
#include "saiextensions.h"
}

#include "Globals.h"
#include "SwitchStateBase.h"
#include "Sai.h"

#include <memory>

#define SAI_VS_VETH_PREFIX   "v"

#define CHECK_STATUS(status) {                                  \
    sai_status_t _status = (status);                            \
    if (_status != SAI_STATUS_SUCCESS) { return _status; } }

#define DEFAULT_VLAN_NUMBER 1

extern saivs::SwitchStateBase::SwitchStateMap g_switch_state_map;

#define PRIVATE __attribute__((visibility("hidden")))

PRIVATE extern const sai_acl_api_t              vs_acl_api;
PRIVATE extern const sai_bfd_api_t              vs_bfd_api;
PRIVATE extern const sai_bmtor_api_t            vs_bmtor_api;
PRIVATE extern const sai_bridge_api_t           vs_bridge_api;
PRIVATE extern const sai_buffer_api_t           vs_buffer_api;
PRIVATE extern const sai_counter_api_t          vs_counter_api;
PRIVATE extern const sai_debug_counter_api_t    vs_debug_counter_api;
PRIVATE extern const sai_dtel_api_t             vs_dtel_api;
PRIVATE extern const sai_fdb_api_t              vs_fdb_api;
PRIVATE extern const sai_hash_api_t             vs_hash_api;
PRIVATE extern const sai_hostif_api_t           vs_hostif_api;
PRIVATE extern const sai_ipmc_api_t             vs_ipmc_api;
PRIVATE extern const sai_ipmc_group_api_t       vs_ipmc_group_api;
PRIVATE extern const sai_isolation_group_api_t  vs_isolation_group_api;
PRIVATE extern const sai_l2mc_api_t             vs_l2mc_api;
PRIVATE extern const sai_l2mc_group_api_t       vs_l2mc_group_api;
PRIVATE extern const sai_lag_api_t              vs_lag_api;
PRIVATE extern const sai_mcast_fdb_api_t        vs_mcast_fdb_api;
PRIVATE extern const sai_mirror_api_t           vs_mirror_api;
PRIVATE extern const sai_mpls_api_t             vs_mpls_api;
PRIVATE extern const sai_nat_api_t              vs_nat_api;
PRIVATE extern const sai_neighbor_api_t         vs_neighbor_api;
PRIVATE extern const sai_next_hop_api_t         vs_next_hop_api;
PRIVATE extern const sai_next_hop_group_api_t   vs_next_hop_group_api;
PRIVATE extern const sai_policer_api_t          vs_policer_api;
PRIVATE extern const sai_port_api_t             vs_port_api;
PRIVATE extern const sai_qos_map_api_t          vs_qos_map_api;
PRIVATE extern const sai_queue_api_t            vs_queue_api;
PRIVATE extern const sai_route_api_t            vs_route_api;
PRIVATE extern const sai_router_interface_api_t vs_router_interface_api;
PRIVATE extern const sai_rpf_group_api_t        vs_rpf_group_api;
PRIVATE extern const sai_samplepacket_api_t     vs_samplepacket_api;
PRIVATE extern const sai_scheduler_api_t        vs_scheduler_api;
PRIVATE extern const sai_scheduler_group_api_t  vs_scheduler_group_api;
PRIVATE extern const sai_segmentroute_api_t     vs_segmentroute_api;
PRIVATE extern const sai_stp_api_t              vs_stp_api;
PRIVATE extern const sai_switch_api_t           vs_switch_api;
PRIVATE extern const sai_tam_api_t              vs_tam_api;
PRIVATE extern const sai_tunnel_api_t           vs_tunnel_api;
PRIVATE extern const sai_udf_api_t              vs_udf_api;
PRIVATE extern const sai_virtual_router_api_t   vs_virtual_router_api;
PRIVATE extern const sai_vlan_api_t             vs_vlan_api;
PRIVATE extern const sai_wred_api_t             vs_wred_api;

PRIVATE extern std::shared_ptr<saivs::Sai>      g_sai;
