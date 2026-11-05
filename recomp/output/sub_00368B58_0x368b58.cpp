#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include <ps2_recompiled_functions.h>
#include <ps2_recompiled_stubs.h>

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00368B58
// Address: 0x368b58 - 0x368e10
void sub_00368B58_0x368b58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00368B58_0x368b58");
#endif

    switch (ctx->pc) {
        case 0x368bdcu: goto label_368bdc;
        case 0x368bf8u: goto label_368bf8;
        case 0x368c10u: goto label_368c10;
        case 0x368c28u: goto label_368c28;
        case 0x368c40u: goto label_368c40;
        case 0x368c58u: goto label_368c58;
        case 0x368c70u: goto label_368c70;
        case 0x368c98u: goto label_368c98;
        case 0x368cc8u: goto label_368cc8;
        case 0x368ce8u: goto label_368ce8;
        case 0x368d08u: goto label_368d08;
        case 0x368d38u: goto label_368d38;
        case 0x368d4cu: goto label_368d4c;
        case 0x368d68u: goto label_368d68;
        case 0x368d80u: goto label_368d80;
        case 0x368d90u: goto label_368d90;
        case 0x368dccu: goto label_368dcc;
        default: break;
    }

    ctx->pc = 0x368b58u;

    // 0x368b58: 0x27bdff00  addiu       $sp, $sp, -0x100
    ctx->pc = 0x368b58u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967040));
    // 0x368b5c: 0x3c020047  lui         $v0, 0x47
    ctx->pc = 0x368b5cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)71 << 16));
    // 0x368b60: 0xffb100b8  sd          $s1, 0xB8($sp)
    ctx->pc = 0x368b60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 184), GPR_U64(ctx, 17));
    // 0x368b64: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x368b64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x368b68: 0xffb200c0  sd          $s2, 0xC0($sp)
    ctx->pc = 0x368b68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 192), GPR_U64(ctx, 18));
    // 0x368b6c: 0x3c110047  lui         $s1, 0x47
    ctx->pc = 0x368b6cu;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)71 << 16));
    // 0x368b70: 0xffb300c8  sd          $s3, 0xC8($sp)
    ctx->pc = 0x368b70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 200), GPR_U64(ctx, 19));
    // 0x368b74: 0x3c120047  lui         $s2, 0x47
    ctx->pc = 0x368b74u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)71 << 16));
    // 0x368b78: 0xffb400d0  sd          $s4, 0xD0($sp)
    ctx->pc = 0x368b78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 208), GPR_U64(ctx, 20));
    // 0x368b7c: 0x3c130047  lui         $s3, 0x47
    ctx->pc = 0x368b7cu;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)71 << 16));
    // 0x368b80: 0xffb500d8  sd          $s5, 0xD8($sp)
    ctx->pc = 0x368b80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 216), GPR_U64(ctx, 21));
    // 0x368b84: 0x3c140047  lui         $s4, 0x47
    ctx->pc = 0x368b84u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)71 << 16));
    // 0x368b88: 0xffb600e0  sd          $s6, 0xE0($sp)
    ctx->pc = 0x368b88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 224), GPR_U64(ctx, 22));
    // 0x368b8c: 0x3c150047  lui         $s5, 0x47
    ctx->pc = 0x368b8cu;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)71 << 16));
    // 0x368b90: 0xffb700e8  sd          $s7, 0xE8($sp)
    ctx->pc = 0x368b90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 232), GPR_U64(ctx, 23));
    // 0x368b94: 0x3c160047  lui         $s6, 0x47
    ctx->pc = 0x368b94u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)71 << 16));
    // 0x368b98: 0x90437a50  lbu         $v1, 0x7A50($v0)
    ctx->pc = 0x368b98u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)FAST_READ8(0x477A50u));
    // 0x368b9c: 0x3c170047  lui         $s7, 0x47
    ctx->pc = 0x368b9cu;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)71 << 16));
    // 0x368ba0: 0xffb000b0  sd          $s0, 0xB0($sp)
    ctx->pc = 0x368ba0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 16));
    // 0x368ba4: 0x265279a0  addiu       $s2, $s2, 0x79A0
    ctx->pc = 0x368ba4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 31136));
    // 0x368ba8: 0xffbe00f0  sd          $fp, 0xF0($sp)
    ctx->pc = 0x368ba8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 240), GPR_U64(ctx, 30));
    // 0x368bac: 0x26317990  addiu       $s1, $s1, 0x7990
    ctx->pc = 0x368bacu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 31120));
    // 0x368bb0: 0xa3a300a0  sb          $v1, 0xA0($sp)
    ctx->pc = 0x368bb0u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 160), (uint8_t)GPR_U32(ctx, 3));
    // 0x368bb4: 0x267379b0  addiu       $s3, $s3, 0x79B0
    ctx->pc = 0x368bb4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 31152));
    // 0x368bb8: 0xffbf00f8  sd          $ra, 0xF8($sp)
    ctx->pc = 0x368bb8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 248), GPR_U64(ctx, 31));
    // 0x368bbc: 0x269479c0  addiu       $s4, $s4, 0x79C0
    ctx->pc = 0x368bbcu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 31168));
    // 0x368bc0: 0x26b579d0  addiu       $s5, $s5, 0x79D0
    ctx->pc = 0x368bc0u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 31184));
    // 0x368bc4: 0x26d679e0  addiu       $s6, $s6, 0x79E0
    ctx->pc = 0x368bc4u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 31200));
    // 0x368bc8: 0x26f77a00  addiu       $s7, $s7, 0x7A00
    ctx->pc = 0x368bc8u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 31232));
    // 0x368bcc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x368bccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x368bd0: 0x2406000c  addiu       $a2, $zero, 0xC
    ctx->pc = 0x368bd0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x368bd4: 0xc0efab3  jal         func_3BEACC
    ctx->pc = 0x368BD4u;
    SET_GPR_U32(ctx, 31, 0x368BDCu);
    ctx->pc = 0x368BD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x368BD4u;
    // 0x368bd8: 0xf02d  daddu       $fp, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BEACCu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BEACCu, 0x368BD4u, 0x368BDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x368BDCu;
label_368bdc:
    // 0x368bdc: 0x27b000a0  addiu       $s0, $sp, 0xA0
    ctx->pc = 0x368bdcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x368be0: 0x37a4000c  ori         $a0, $sp, 0xC
    ctx->pc = 0x368be0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 29) | (uint64_t)(uint16_t)12);
    // 0x368be4: 0xafb10000  sw          $s1, 0x0($sp)
    ctx->pc = 0x368be4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 17));
    // 0x368be8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x368be8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x368bec: 0xafb00008  sw          $s0, 0x8($sp)
    ctx->pc = 0x368becu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 16));
    // 0x368bf0: 0xc0efab3  jal         func_3BEACC
    ctx->pc = 0x368BF0u;
    SET_GPR_U32(ctx, 31, 0x368BF8u);
    ctx->pc = 0x368BF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x368BF0u;
    // 0x368bf4: 0x2406000c  addiu       $a2, $zero, 0xC (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BEACCu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BEACCu, 0x368BF0u, 0x368BF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x368BF8u;
label_368bf8:
    // 0x368bf8: 0xafb2000c  sw          $s2, 0xC($sp)
    ctx->pc = 0x368bf8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 18));
    // 0x368bfc: 0x27a40018  addiu       $a0, $sp, 0x18
    ctx->pc = 0x368bfcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 24));
    // 0x368c00: 0xafb00014  sw          $s0, 0x14($sp)
    ctx->pc = 0x368c00u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 16));
    // 0x368c04: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x368c04u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x368c08: 0xc0efab3  jal         func_3BEACC
    ctx->pc = 0x368C08u;
    SET_GPR_U32(ctx, 31, 0x368C10u);
    ctx->pc = 0x368C0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x368C08u;
    // 0x368c0c: 0x2406000c  addiu       $a2, $zero, 0xC (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BEACCu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BEACCu, 0x368C08u, 0x368C10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x368C10u;
label_368c10:
    // 0x368c10: 0x27a40024  addiu       $a0, $sp, 0x24
    ctx->pc = 0x368c10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 36));
    // 0x368c14: 0xafb30018  sw          $s3, 0x18($sp)
    ctx->pc = 0x368c14u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 19));
    // 0x368c18: 0xafb00020  sw          $s0, 0x20($sp)
    ctx->pc = 0x368c18u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 16));
    // 0x368c1c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x368c1cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x368c20: 0xc0efab3  jal         func_3BEACC
    ctx->pc = 0x368C20u;
    SET_GPR_U32(ctx, 31, 0x368C28u);
    ctx->pc = 0x368C24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x368C20u;
    // 0x368c24: 0x2406000c  addiu       $a2, $zero, 0xC (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BEACCu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BEACCu, 0x368C20u, 0x368C28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x368C28u;
label_368c28:
    // 0x368c28: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x368c28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x368c2c: 0xafb40024  sw          $s4, 0x24($sp)
    ctx->pc = 0x368c2cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 20));
    // 0x368c30: 0xafb0002c  sw          $s0, 0x2C($sp)
    ctx->pc = 0x368c30u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 16));
    // 0x368c34: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x368c34u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x368c38: 0xc0efab3  jal         func_3BEACC
    ctx->pc = 0x368C38u;
    SET_GPR_U32(ctx, 31, 0x368C40u);
    ctx->pc = 0x368C3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x368C38u;
    // 0x368c3c: 0x2406000c  addiu       $a2, $zero, 0xC (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BEACCu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BEACCu, 0x368C38u, 0x368C40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x368C40u;
label_368c40:
    // 0x368c40: 0x27a4003c  addiu       $a0, $sp, 0x3C
    ctx->pc = 0x368c40u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 60));
    // 0x368c44: 0xafb50030  sw          $s5, 0x30($sp)
    ctx->pc = 0x368c44u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 21));
    // 0x368c48: 0xafb00038  sw          $s0, 0x38($sp)
    ctx->pc = 0x368c48u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 16));
    // 0x368c4c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x368c4cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x368c50: 0xc0efab3  jal         func_3BEACC
    ctx->pc = 0x368C50u;
    SET_GPR_U32(ctx, 31, 0x368C58u);
    ctx->pc = 0x368C54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x368C50u;
    // 0x368c54: 0x2406000c  addiu       $a2, $zero, 0xC (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BEACCu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BEACCu, 0x368C50u, 0x368C58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x368C58u;
label_368c58:
    // 0x368c58: 0x27a40048  addiu       $a0, $sp, 0x48
    ctx->pc = 0x368c58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 72));
    // 0x368c5c: 0xafb6003c  sw          $s6, 0x3C($sp)
    ctx->pc = 0x368c5cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 60), GPR_U32(ctx, 22));
    // 0x368c60: 0xafb00044  sw          $s0, 0x44($sp)
    ctx->pc = 0x368c60u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 16));
    // 0x368c64: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x368c64u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x368c68: 0xc0efab3  jal         func_3BEACC
    ctx->pc = 0x368C68u;
    SET_GPR_U32(ctx, 31, 0x368C70u);
    ctx->pc = 0x368C6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x368C68u;
    // 0x368c6c: 0x2406000c  addiu       $a2, $zero, 0xC (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BEACCu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BEACCu, 0x368C68u, 0x368C70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x368C70u;
label_368c70:
    // 0x368c70: 0x3c030047  lui         $v1, 0x47
    ctx->pc = 0x368c70u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)71 << 16));
    // 0x368c74: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x368c74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x368c78: 0x24637a58  addiu       $v1, $v1, 0x7A58
    ctx->pc = 0x368c78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 31320));
    // 0x368c7c: 0x27a40054  addiu       $a0, $sp, 0x54
    ctx->pc = 0x368c7cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 84));
    // 0x368c80: 0xafa30050  sw          $v1, 0x50($sp)
    ctx->pc = 0x368c80u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 3));
    // 0x368c84: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x368c84u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x368c88: 0xafb70048  sw          $s7, 0x48($sp)
    ctx->pc = 0x368c88u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 23));
    // 0x368c8c: 0x2406000c  addiu       $a2, $zero, 0xC
    ctx->pc = 0x368c8cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x368c90: 0xc0efab3  jal         func_3BEACC
    ctx->pc = 0x368C90u;
    SET_GPR_U32(ctx, 31, 0x368C98u);
    ctx->pc = 0x368C94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x368C90u;
    // 0x368c94: 0xafa2004c  sw          $v0, 0x4C($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 76), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BEACCu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BEACCu, 0x368C90u, 0x368C98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x368C98u;
label_368c98:
    // 0x368c98: 0x3c040047  lui         $a0, 0x47
    ctx->pc = 0x368c98u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)71 << 16));
    // 0x368c9c: 0x3c030047  lui         $v1, 0x47
    ctx->pc = 0x368c9cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)71 << 16));
    // 0x368ca0: 0x24847a30  addiu       $a0, $a0, 0x7A30
    ctx->pc = 0x368ca0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 31280));
    // 0x368ca4: 0x24637a68  addiu       $v1, $v1, 0x7A68
    ctx->pc = 0x368ca4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 31336));
    // 0x368ca8: 0xafa40054  sw          $a0, 0x54($sp)
    ctx->pc = 0x368ca8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 4));
    // 0x368cac: 0x24020009  addiu       $v0, $zero, 0x9
    ctx->pc = 0x368cacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x368cb0: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x368cb0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x368cb4: 0xafa3005c  sw          $v1, 0x5C($sp)
    ctx->pc = 0x368cb4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 92), GPR_U32(ctx, 3));
    // 0x368cb8: 0xafa20058  sw          $v0, 0x58($sp)
    ctx->pc = 0x368cb8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 2));
    // 0x368cbc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x368cbcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x368cc0: 0xc0efab3  jal         func_3BEACC
    ctx->pc = 0x368CC0u;
    SET_GPR_U32(ctx, 31, 0x368CC8u);
    ctx->pc = 0x368CC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x368CC0u;
    // 0x368cc4: 0x2406000c  addiu       $a2, $zero, 0xC (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BEACCu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BEACCu, 0x368CC0u, 0x368CC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x368CC8u;
label_368cc8:
    // 0x368cc8: 0x3c020047  lui         $v0, 0x47
    ctx->pc = 0x368cc8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)71 << 16));
    // 0x368ccc: 0x27a4006c  addiu       $a0, $sp, 0x6C
    ctx->pc = 0x368cccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 108));
    // 0x368cd0: 0x24427a10  addiu       $v0, $v0, 0x7A10
    ctx->pc = 0x368cd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 31248));
    // 0x368cd4: 0xafb00068  sw          $s0, 0x68($sp)
    ctx->pc = 0x368cd4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 104), GPR_U32(ctx, 16));
    // 0x368cd8: 0xafa20060  sw          $v0, 0x60($sp)
    ctx->pc = 0x368cd8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 2));
    // 0x368cdc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x368cdcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x368ce0: 0xc0efab3  jal         func_3BEACC
    ctx->pc = 0x368CE0u;
    SET_GPR_U32(ctx, 31, 0x368CE8u);
    ctx->pc = 0x368CE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x368CE0u;
    // 0x368ce4: 0x2406000c  addiu       $a2, $zero, 0xC (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BEACCu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BEACCu, 0x368CE0u, 0x368CE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x368CE8u;
label_368ce8:
    // 0x368ce8: 0x3c030047  lui         $v1, 0x47
    ctx->pc = 0x368ce8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)71 << 16));
    // 0x368cec: 0x27a40078  addiu       $a0, $sp, 0x78
    ctx->pc = 0x368cecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 120));
    // 0x368cf0: 0x24637a20  addiu       $v1, $v1, 0x7A20
    ctx->pc = 0x368cf0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 31264));
    // 0x368cf4: 0xafb00074  sw          $s0, 0x74($sp)
    ctx->pc = 0x368cf4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 116), GPR_U32(ctx, 16));
    // 0x368cf8: 0xafa3006c  sw          $v1, 0x6C($sp)
    ctx->pc = 0x368cf8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 108), GPR_U32(ctx, 3));
    // 0x368cfc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x368cfcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x368d00: 0xc0efab3  jal         func_3BEACC
    ctx->pc = 0x368D00u;
    SET_GPR_U32(ctx, 31, 0x368D08u);
    ctx->pc = 0x368D04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x368D00u;
    // 0x368d04: 0x2406000c  addiu       $a2, $zero, 0xC (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BEACCu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BEACCu, 0x368D00u, 0x368D08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x368D08u;
label_368d08:
    // 0x368d08: 0x3c040047  lui         $a0, 0x47
    ctx->pc = 0x368d08u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)71 << 16));
    // 0x368d0c: 0x3c030047  lui         $v1, 0x47
    ctx->pc = 0x368d0cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)71 << 16));
    // 0x368d10: 0x24847a40  addiu       $a0, $a0, 0x7A40
    ctx->pc = 0x368d10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 31296));
    // 0x368d14: 0x24637a78  addiu       $v1, $v1, 0x7A78
    ctx->pc = 0x368d14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 31352));
    // 0x368d18: 0xafa40078  sw          $a0, 0x78($sp)
    ctx->pc = 0x368d18u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 120), GPR_U32(ctx, 4));
    // 0x368d1c: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x368d1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x368d20: 0xafa30080  sw          $v1, 0x80($sp)
    ctx->pc = 0x368d20u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 128), GPR_U32(ctx, 3));
    // 0x368d24: 0x27a40084  addiu       $a0, $sp, 0x84
    ctx->pc = 0x368d24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 132));
    // 0x368d28: 0xafa2007c  sw          $v0, 0x7C($sp)
    ctx->pc = 0x368d28u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 124), GPR_U32(ctx, 2));
    // 0x368d2c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x368d2cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x368d30: 0xc0efab3  jal         func_3BEACC
    ctx->pc = 0x368D30u;
    SET_GPR_U32(ctx, 31, 0x368D38u);
    ctx->pc = 0x368D34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x368D30u;
    // 0x368d34: 0x2406000c  addiu       $a2, $zero, 0xC (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BEACCu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BEACCu, 0x368D30u, 0x368D38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x368D38u;
label_368d38:
    // 0x368d38: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x368d38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x368d3c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x368d3cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x368d40: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x368d40u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x368d44: 0xc0efab3  jal         func_3BEACC
    ctx->pc = 0x368D44u;
    SET_GPR_U32(ctx, 31, 0x368D4Cu);
    ctx->pc = 0x368D48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x368D44u;
    // 0x368d48: 0x2406000c  addiu       $a2, $zero, 0xC (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BEACCu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BEACCu, 0x368D44u, 0x368D4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x368D4Cu;
label_368d4c:
    // 0x368d4c: 0x3c030047  lui         $v1, 0x47
    ctx->pc = 0x368d4cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)71 << 16));
    // 0x368d50: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x368d50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x368d54: 0x24637a88  addiu       $v1, $v1, 0x7A88
    ctx->pc = 0x368d54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 31368));
    // 0x368d58: 0xafb00098  sw          $s0, 0x98($sp)
    ctx->pc = 0x368d58u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 152), GPR_U32(ctx, 16));
    // 0x368d5c: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x368D5Cu;
    {
        const bool branch_taken_0x368d5c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x368D60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x368D5Cu;
        // 0x368d60: 0xafa30090  sw          $v1, 0x90($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 144), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x368d5c) {
            ctx->pc = 0x368DB4u;
            goto label_368db4;
        }
    }
    ctx->pc = 0x368D64u;
    // 0x368d64: 0x3a0802d  daddu       $s0, $sp, $zero
    ctx->pc = 0x368d64u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_368d68:
    // 0x368d68: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x368d68u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
    // 0x368d6c: 0x8c629e40  lw          $v0, -0x61C0($v1)
    ctx->pc = 0x368d6cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3F9E40u));
    // 0x368d70: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x368D70u;
    {
        const bool branch_taken_0x368d70 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x368D74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x368D70u;
        // 0x368d74: 0x2411000c  addiu       $s1, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x368d70) {
            ctx->pc = 0x368D84u;
            goto label_368d84;
        }
    }
    ctx->pc = 0x368D78u;
    // 0x368d78: 0xc0f0adc  jal         func_3C2B70
    ctx->pc = 0x368D78u;
    SET_GPR_U32(ctx, 31, 0x368D80u);
    ctx->pc = 0x368D7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x368D78u;
    // 0x368d7c: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C2B70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C2B70u, 0x368D78u, 0x368D80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x368D80u;
label_368d80:
    // 0x368d80: 0x2411000c  addiu       $s1, $zero, 0xC
    ctx->pc = 0x368d80u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_368d84:
    // 0x368d84: 0x3d11018  mult        $v0, $fp, $s1
    ctx->pc = 0x368d84u;
    { int64_t result = (int64_t)GPR_S32(ctx, 30) * (int64_t)GPR_S32(ctx, 17); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x368d88: 0xc0da240  jal         func_368900
    ctx->pc = 0x368D88u;
    SET_GPR_U32(ctx, 31, 0x368D90u);
    ctx->pc = 0x368D8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x368D88u;
    // 0x368d8c: 0x5d2021  addu        $a0, $v0, $sp (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x368900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x368900u, 0x368D88u, 0x368D90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x368D90u;
label_368d90:
    // 0x368d90: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x368D90u;
    {
        const bool branch_taken_0x368d90 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x368D94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x368D90u;
        // 0x368d94: 0x27de0001  addiu       $fp, $fp, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x368d90) {
            ctx->pc = 0x368DA0u;
            goto label_368da0;
        }
    }
    ctx->pc = 0x368D98u;
    // 0x368d98: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x368D98u;
    {
        const bool branch_taken_0x368d98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x368D9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x368D98u;
        // 0x368d9c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x368d98) {
            ctx->pc = 0x368DDCu;
            goto label_368ddc;
        }
    }
    ctx->pc = 0x368DA0u;
label_368da0:
    // 0x368da0: 0x3d11818  mult        $v1, $fp, $s1
    ctx->pc = 0x368da0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 30) * (int64_t)GPR_S32(ctx, 17); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x368da4: 0x7d1021  addu        $v0, $v1, $sp
    ctx->pc = 0x368da4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 29)));
    // 0x368da8: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x368da8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x368dac: 0x1460ffee  bnez        $v1, . + 4 + (-0x12 << 2)
    ctx->pc = 0x368DACu;
    {
        const bool branch_taken_0x368dac = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x368DB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x368DACu;
        // 0x368db0: 0x2610000c  addiu       $s0, $s0, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x368dac) {
            ctx->pc = 0x368D68u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_368d68;
        }
    }
    ctx->pc = 0x368DB4u;
label_368db4:
    // 0x368db4: 0x3c040040  lui         $a0, 0x40
    ctx->pc = 0x368db4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)64 << 16));
    // 0x368db8: 0x8c829e40  lw          $v0, -0x61C0($a0)
    ctx->pc = 0x368db8u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3F9E40u));
    // 0x368dbc: 0x54400007  bnel        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x368DBCu;
    {
        const bool branch_taken_0x368dbc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x368dbc) {
            ctx->pc = 0x368DC0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x368DBCu;
            // 0x368dc0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x368DDCu;
            goto label_368ddc;
        }
    }
    ctx->pc = 0x368DC4u;
    // 0x368dc4: 0xc0da240  jal         func_368900
    ctx->pc = 0x368DC4u;
    SET_GPR_U32(ctx, 31, 0x368DCCu);
    ctx->pc = 0x368DC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x368DC4u;
    // 0x368dc8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x368900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x368900u, 0x368DC4u, 0x368DCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x368DCCu;
label_368dcc:
    // 0x368dcc: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x368dccu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x368dd0: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x368DD0u;
    {
        const bool branch_taken_0x368dd0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x368DD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x368DD0u;
        // 0x368dd4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x368dd0) {
            ctx->pc = 0x368DDCu;
            goto label_368ddc;
        }
    }
    ctx->pc = 0x368DD8u;
    // 0x368dd8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x368dd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_368ddc:
    // 0x368ddc: 0xdfb000b0  ld          $s0, 0xB0($sp)
    ctx->pc = 0x368ddcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x368de0: 0xdfb100b8  ld          $s1, 0xB8($sp)
    ctx->pc = 0x368de0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x368de4: 0xdfb200c0  ld          $s2, 0xC0($sp)
    ctx->pc = 0x368de4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x368de8: 0xdfb300c8  ld          $s3, 0xC8($sp)
    ctx->pc = 0x368de8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x368dec: 0xdfb400d0  ld          $s4, 0xD0($sp)
    ctx->pc = 0x368decu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x368df0: 0xdfb500d8  ld          $s5, 0xD8($sp)
    ctx->pc = 0x368df0u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x368df4: 0xdfb600e0  ld          $s6, 0xE0($sp)
    ctx->pc = 0x368df4u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x368df8: 0xdfb700e8  ld          $s7, 0xE8($sp)
    ctx->pc = 0x368df8u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x368dfc: 0xdfbe00f0  ld          $fp, 0xF0($sp)
    ctx->pc = 0x368dfcu;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x368e00: 0xdfbf00f8  ld          $ra, 0xF8($sp)
    ctx->pc = 0x368e00u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x368e04: 0x3e00008  jr          $ra
    ctx->pc = 0x368E04u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x368E08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x368E04u;
        // 0x368e08: 0x27bd0100  addiu       $sp, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x368E04u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x368E0Cu;
    // 0x368e0c: 0x0  nop
    ctx->pc = 0x368e0cu;
    // NOP
    ctx->pc = 0x368e10u;
}
