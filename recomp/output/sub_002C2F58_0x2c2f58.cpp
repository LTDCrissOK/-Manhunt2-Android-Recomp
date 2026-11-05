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

// Function: sub_002C2F58
// Address: 0x2c2f58 - 0x2c3068
void sub_002C2F58_0x2c2f58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002C2F58_0x2c2f58");
#endif

    switch (ctx->pc) {
        case 0x2c2f8cu: goto label_2c2f8c;
        case 0x2c2fa0u: goto label_2c2fa0;
        case 0x2c2fb8u: goto label_2c2fb8;
        case 0x2c2fccu: goto label_2c2fcc;
        case 0x2c2fe4u: goto label_2c2fe4;
        case 0x2c2ff8u: goto label_2c2ff8;
        case 0x2c3010u: goto label_2c3010;
        case 0x2c3024u: goto label_2c3024;
        case 0x2c3030u: goto label_2c3030;
        case 0x2c303cu: goto label_2c303c;
        case 0x2c3050u: goto label_2c3050;
        default: break;
    }

    ctx->pc = 0x2c2f58u;

    // 0x2c2f58: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2c2f58u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2c2f5c: 0x3c020043  lui         $v0, 0x43
    ctx->pc = 0x2c2f5cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)67 << 16));
    // 0x2c2f60: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2c2f60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2c2f64: 0x24423d68  addiu       $v0, $v0, 0x3D68
    ctx->pc = 0x2c2f64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 15720));
    // 0x2c2f68: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2c2f68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2c2f6c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2c2f6cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c2f70: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2c2f70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2c2f74: 0xae02003c  sw          $v0, 0x3C($s0)
    ctx->pc = 0x2c2f74u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 60), GPR_U32(ctx, 2));
    // 0x2c2f78: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x2c2f78u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x2c2f7c: 0x10800029  beqz        $a0, . + 4 + (0x29 << 2)
    ctx->pc = 0x2C2F7Cu;
    {
        const bool branch_taken_0x2c2f7c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C2F80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C2F7Cu;
        // 0x2c2f80: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c2f7c) {
            ctx->pc = 0x2C3024u;
            goto label_2c3024;
        }
    }
    ctx->pc = 0x2C2F84u;
    // 0x2c2f84: 0xc0c7b02  jal         func_31EC08
    ctx->pc = 0x2C2F84u;
    SET_GPR_U32(ctx, 31, 0x2C2F8Cu);
    ctx->pc = 0x31EC08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31EC08u, 0x2C2F84u, 0x2C2F8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C2F8Cu;
label_2c2f8c:
    // 0x2c2f8c: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x2c2f8cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x2c2f90: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x2C2F90u;
    {
        const bool branch_taken_0x2c2f90 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c2f90) {
            ctx->pc = 0x2C2F94u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C2F90u;
            // 0x2c2f94: 0x8e040010  lw          $a0, 0x10($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C2FA4u;
            goto label_2c2fa4;
        }
    }
    ctx->pc = 0x2C2F98u;
    // 0x2c2f98: 0xc0c7aae  jal         func_31EAB8
    ctx->pc = 0x2C2F98u;
    SET_GPR_U32(ctx, 31, 0x2C2FA0u);
    ctx->pc = 0x2C2F9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C2F98u;
    // 0x2c2f9c: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31EAB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31EAB8u, 0x2C2F98u, 0x2C2FA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C2FA0u;
label_2c2fa0:
    // 0x2c2fa0: 0x8e040010  lw          $a0, 0x10($s0)
    ctx->pc = 0x2c2fa0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_2c2fa4:
    // 0x2c2fa4: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x2c2fa4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x2c2fa8: 0x5082000a  beql        $a0, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x2C2FA8u;
    {
        const bool branch_taken_0x2c2fa8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x2c2fa8) {
            ctx->pc = 0x2C2FACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C2FA8u;
            // 0x2c2fac: 0x8e040014  lw          $a0, 0x14($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C2FD4u;
            goto label_2c2fd4;
        }
    }
    ctx->pc = 0x2C2FB0u;
    // 0x2c2fb0: 0xc0c7b02  jal         func_31EC08
    ctx->pc = 0x2C2FB0u;
    SET_GPR_U32(ctx, 31, 0x2C2FB8u);
    ctx->pc = 0x31EC08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31EC08u, 0x2C2FB0u, 0x2C2FB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C2FB8u;
label_2c2fb8:
    // 0x2c2fb8: 0x8e040010  lw          $a0, 0x10($s0)
    ctx->pc = 0x2c2fb8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x2c2fbc: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x2C2FBCu;
    {
        const bool branch_taken_0x2c2fbc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c2fbc) {
            ctx->pc = 0x2C2FC0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C2FBCu;
            // 0x2c2fc0: 0x8e040014  lw          $a0, 0x14($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C2FD0u;
            goto label_2c2fd0;
        }
    }
    ctx->pc = 0x2C2FC4u;
    // 0x2c2fc4: 0xc0c7aae  jal         func_31EAB8
    ctx->pc = 0x2C2FC4u;
    SET_GPR_U32(ctx, 31, 0x2C2FCCu);
    ctx->pc = 0x2C2FC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C2FC4u;
    // 0x2c2fc8: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31EAB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31EAB8u, 0x2C2FC4u, 0x2C2FCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C2FCCu;
label_2c2fcc:
    // 0x2c2fcc: 0x8e040014  lw          $a0, 0x14($s0)
    ctx->pc = 0x2c2fccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
label_2c2fd0:
    // 0x2c2fd0: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x2c2fd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_2c2fd4:
    // 0x2c2fd4: 0x50820009  beql        $a0, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2C2FD4u;
    {
        const bool branch_taken_0x2c2fd4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x2c2fd4) {
            ctx->pc = 0x2C2FD8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C2FD4u;
            // 0x2c2fd8: 0x8e040018  lw          $a0, 0x18($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C2FFCu;
            goto label_2c2ffc;
        }
    }
    ctx->pc = 0x2C2FDCu;
    // 0x2c2fdc: 0xc0c7b02  jal         func_31EC08
    ctx->pc = 0x2C2FDCu;
    SET_GPR_U32(ctx, 31, 0x2C2FE4u);
    ctx->pc = 0x31EC08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31EC08u, 0x2C2FDCu, 0x2C2FE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C2FE4u;
label_2c2fe4:
    // 0x2c2fe4: 0x8e040014  lw          $a0, 0x14($s0)
    ctx->pc = 0x2c2fe4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x2c2fe8: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x2C2FE8u;
    {
        const bool branch_taken_0x2c2fe8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c2fe8) {
            ctx->pc = 0x2C2FECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C2FE8u;
            // 0x2c2fec: 0x8e040018  lw          $a0, 0x18($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C2FFCu;
            goto label_2c2ffc;
        }
    }
    ctx->pc = 0x2C2FF0u;
    // 0x2c2ff0: 0xc0c7aae  jal         func_31EAB8
    ctx->pc = 0x2C2FF0u;
    SET_GPR_U32(ctx, 31, 0x2C2FF8u);
    ctx->pc = 0x2C2FF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C2FF0u;
    // 0x2c2ff4: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31EAB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31EAB8u, 0x2C2FF0u, 0x2C2FF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C2FF8u;
label_2c2ff8:
    // 0x2c2ff8: 0x8e040018  lw          $a0, 0x18($s0)
    ctx->pc = 0x2c2ff8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
label_2c2ffc:
    // 0x2c2ffc: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x2c2ffcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x2c3000: 0x50820009  beql        $a0, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2C3000u;
    {
        const bool branch_taken_0x2c3000 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x2c3000) {
            ctx->pc = 0x2C3004u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C3000u;
            // 0x2c3004: 0x26040028  addiu       $a0, $s0, 0x28 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 40));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C3028u;
            goto label_2c3028;
        }
    }
    ctx->pc = 0x2C3008u;
    // 0x2c3008: 0xc0c7b02  jal         func_31EC08
    ctx->pc = 0x2C3008u;
    SET_GPR_U32(ctx, 31, 0x2C3010u);
    ctx->pc = 0x31EC08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31EC08u, 0x2C3008u, 0x2C3010u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C3010u;
label_2c3010:
    // 0x2c3010: 0x8e040018  lw          $a0, 0x18($s0)
    ctx->pc = 0x2c3010u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x2c3014: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x2C3014u;
    {
        const bool branch_taken_0x2c3014 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c3014) {
            ctx->pc = 0x2C3018u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C3014u;
            // 0x2c3018: 0x26040028  addiu       $a0, $s0, 0x28 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 40));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C3028u;
            goto label_2c3028;
        }
    }
    ctx->pc = 0x2C301Cu;
    // 0x2c301c: 0xc0c7aae  jal         func_31EAB8
    ctx->pc = 0x2C301Cu;
    SET_GPR_U32(ctx, 31, 0x2C3024u);
    ctx->pc = 0x2C3020u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C301Cu;
    // 0x2c3020: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31EAB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31EAB8u, 0x2C301Cu, 0x2C3024u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C3024u;
label_2c3024:
    // 0x2c3024: 0x26040028  addiu       $a0, $s0, 0x28
    ctx->pc = 0x2c3024u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 40));
label_2c3028:
    // 0x2c3028: 0xc0af792  jal         func_2BDE48
    ctx->pc = 0x2C3028u;
    SET_GPR_U32(ctx, 31, 0x2C3030u);
    ctx->pc = 0x2C302Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C3028u;
    // 0x2c302c: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BDE48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BDE48u, 0x2C3028u, 0x2C3030u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C3030u;
label_2c3030:
    // 0x2c3030: 0x2604001c  addiu       $a0, $s0, 0x1C
    ctx->pc = 0x2c3030u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 28));
    // 0x2c3034: 0xc0b058c  jal         func_2C1630
    ctx->pc = 0x2C3034u;
    SET_GPR_U32(ctx, 31, 0x2C303Cu);
    ctx->pc = 0x2C3038u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C3034u;
    // 0x2c3038: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C1630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C1630u, 0x2C3034u, 0x2C303Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C303Cu;
label_2c303c:
    // 0x2c303c: 0x32220001  andi        $v0, $s1, 0x1
    ctx->pc = 0x2c303cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)1);
    // 0x2c3040: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x2C3040u;
    {
        const bool branch_taken_0x2c3040 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c3040) {
            ctx->pc = 0x2C3044u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C3040u;
            // 0x2c3044: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C3054u;
            goto label_2c3054;
        }
    }
    ctx->pc = 0x2C3048u;
    // 0x2c3048: 0xc0f5222  jal         func_3D4888
    ctx->pc = 0x2C3048u;
    SET_GPR_U32(ctx, 31, 0x2C3050u);
    ctx->pc = 0x2C304Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C3048u;
    // 0x2c304c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4888u, 0x2C3048u, 0x2C3050u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C3050u;
label_2c3050:
    // 0x2c3050: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2c3050u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2c3054:
    // 0x2c3054: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2c3054u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2c3058: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2c3058u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2c305c: 0x3e00008  jr          $ra
    ctx->pc = 0x2C305Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C3060u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C305Cu;
        // 0x2c3060: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C305Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2C3064u;
    // 0x2c3064: 0x0  nop
    ctx->pc = 0x2c3064u;
    // NOP
    ctx->pc = 0x2c3068u;
}
