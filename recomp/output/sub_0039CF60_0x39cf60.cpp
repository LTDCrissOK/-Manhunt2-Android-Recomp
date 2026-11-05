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

// Function: sub_0039CF60
// Address: 0x39cf60 - 0x39d018
void sub_0039CF60_0x39cf60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0039CF60_0x39cf60");
#endif

    switch (ctx->pc) {
        case 0x39cf8cu: goto label_39cf8c;
        case 0x39cf98u: goto label_39cf98;
        case 0x39cfa4u: goto label_39cfa4;
        case 0x39cfb0u: goto label_39cfb0;
        case 0x39cfc0u: goto label_39cfc0;
        case 0x39cfd0u: goto label_39cfd0;
        case 0x39cfdcu: goto label_39cfdc;
        case 0x39cfe8u: goto label_39cfe8;
        default: break;
    }

    ctx->pc = 0x39cf60u;

    // 0x39cf60: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x39cf60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x39cf64: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x39cf64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x39cf68: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x39cf68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x39cf6c: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x39cf6cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39cf70: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x39cf70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x39cf74: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x39cf74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x39cf78: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x39cf78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x39cf7c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x39cf7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x39cf80: 0x8e510004  lw          $s1, 0x4($s2)
    ctx->pc = 0x39cf80u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x39cf84: 0xc0e6476  jal         func_3991D8
    ctx->pc = 0x39CF84u;
    SET_GPR_U32(ctx, 31, 0x39CF8Cu);
    ctx->pc = 0x39CF88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39CF84u;
    // 0x39cf88: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3991D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3991D8u, 0x39CF84u, 0x39CF8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39CF8Cu;
label_39cf8c:
    // 0x39cf8c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x39cf8cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39cf90: 0xc0e647c  jal         func_3991F0
    ctx->pc = 0x39CF90u;
    SET_GPR_U32(ctx, 31, 0x39CF98u);
    ctx->pc = 0x39CF94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39CF90u;
    // 0x39cf94: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3991F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3991F0u, 0x39CF90u, 0x39CF98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39CF98u;
label_39cf98:
    // 0x39cf98: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x39cf98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39cf9c: 0xc0e6488  jal         func_399220
    ctx->pc = 0x39CF9Cu;
    SET_GPR_U32(ctx, 31, 0x39CFA4u);
    ctx->pc = 0x39CFA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39CF9Cu;
    // 0x39cfa0: 0x40a02d  daddu       $s4, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x399220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x399220u, 0x39CF9Cu, 0x39CFA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39CFA4u;
label_39cfa4:
    // 0x39cfa4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x39cfa4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39cfa8: 0xc0e64c6  jal         func_399318
    ctx->pc = 0x39CFA8u;
    SET_GPR_U32(ctx, 31, 0x39CFB0u);
    ctx->pc = 0x39CFACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39CFA8u;
    // 0x39cfac: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x399318u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x399318u, 0x39CFA8u, 0x39CFB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39CFB0u;
label_39cfb0:
    // 0x39cfb0: 0x2138023  subu        $s0, $s0, $s3
    ctx->pc = 0x39cfb0u;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 19)));
    // 0x39cfb4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x39cfb4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39cfb8: 0xc0e6448  jal         func_399120
    ctx->pc = 0x39CFB8u;
    SET_GPR_U32(ctx, 31, 0x39CFC0u);
    ctx->pc = 0x39CFBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39CFB8u;
    // 0x39cfbc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x399120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x399120u, 0x39CFB8u, 0x39CFC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39CFC0u;
label_39cfc0:
    // 0x39cfc0: 0xae500090  sw          $s0, 0x90($s2)
    ctx->pc = 0x39cfc0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 144), GPR_U32(ctx, 16));
    // 0x39cfc4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x39cfc4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39cfc8: 0xc0e6446  jal         func_399118
    ctx->pc = 0x39CFC8u;
    SET_GPR_U32(ctx, 31, 0x39CFD0u);
    ctx->pc = 0x39CFCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39CFC8u;
    // 0x39cfcc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x399118u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x399118u, 0x39CFC8u, 0x39CFD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39CFD0u;
label_39cfd0:
    // 0x39cfd0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x39cfd0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39cfd4: 0xc0e644a  jal         func_399128
    ctx->pc = 0x39CFD4u;
    SET_GPR_U32(ctx, 31, 0x39CFDCu);
    ctx->pc = 0x39CFD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39CFD4u;
    // 0x39cfd8: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x399128u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x399128u, 0x39CFD4u, 0x39CFDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39CFDCu;
label_39cfdc:
    // 0x39cfdc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x39cfdcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39cfe0: 0xc0e6438  jal         func_3990E0
    ctx->pc = 0x39CFE0u;
    SET_GPR_U32(ctx, 31, 0x39CFE8u);
    ctx->pc = 0x39CFE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39CFE0u;
    // 0x39cfe4: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3990E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3990E0u, 0x39CFE0u, 0x39CFE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39CFE8u;
label_39cfe8:
    // 0x39cfe8: 0x3c05003a  lui         $a1, 0x3A
    ctx->pc = 0x39cfe8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)58 << 16));
    // 0x39cfec: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x39cfecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39cff0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x39cff0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x39cff4: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x39cff4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39cff8: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x39cff8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x39cffc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x39cffcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x39d000: 0x24a5d018  addiu       $a1, $a1, -0x2FE8
    ctx->pc = 0x39d000u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294955032));
    // 0x39d004: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x39d004u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x39d008: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x39d008u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x39d00c: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x39d00cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x39d010: 0x80e6442  j           func_399108
    ctx->pc = 0x39D010u;
    ctx->pc = 0x39D014u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39D010u;
    // 0x39d014: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x399108u;
    sub_00399108_0x399108(rdram, ctx, runtime); return;
    ctx->pc = 0x39D018u;
}
