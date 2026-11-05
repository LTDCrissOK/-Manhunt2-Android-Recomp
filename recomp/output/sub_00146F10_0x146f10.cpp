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

// Function: sub_00146F10
// Address: 0x146f10 - 0x146fc0
void sub_00146F10_0x146f10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00146F10_0x146f10");
#endif

    switch (ctx->pc) {
        case 0x146f48u: goto label_146f48;
        case 0x146f6cu: goto label_146f6c;
        case 0x146f78u: goto label_146f78;
        case 0x146f94u: goto label_146f94;
        case 0x146fa4u: goto label_146fa4;
        default: break;
    }

    ctx->pc = 0x146f10u;

    // 0x146f10: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x146f10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x146f14: 0x3c020049  lui         $v0, 0x49
    ctx->pc = 0x146f14u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)73 << 16));
    // 0x146f18: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x146f18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x146f1c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x146f1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x146f20: 0x2450bd58  addiu       $s0, $v0, -0x42A8
    ctx->pc = 0x146f20u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294950232));
    // 0x146f24: 0x8c43bd58  lw          $v1, -0x42A8($v0)
    ctx->pc = 0x146f24u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x48BD58u));
    // 0x146f28: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x146f28u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x146f2c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x146f2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x146f30: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x146F30u;
    {
        const bool branch_taken_0x146f30 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x146F34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x146F30u;
        // 0x146f34: 0xffbf0018  sd          $ra, 0x18($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x146f30) {
            ctx->pc = 0x146F40u;
            goto label_146f40;
        }
    }
    ctx->pc = 0x146F38u;
    // 0x146f38: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x146F38u;
    {
        const bool branch_taken_0x146f38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x146F3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x146F38u;
        // 0x146f3c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x146f38) {
            ctx->pc = 0x146FA8u;
            goto label_146fa8;
        }
    }
    ctx->pc = 0x146F40u;
label_146f40:
    // 0x146f40: 0xc0dc0f6  jal         func_3703D8
    ctx->pc = 0x146F40u;
    SET_GPR_U32(ctx, 31, 0x146F48u);
    ctx->pc = 0x3703D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3703D8u, 0x146F40u, 0x146F48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x146F48u;
label_146f48:
    // 0x146f48: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x146f48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x146f4c: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x146F4Cu;
    {
        const bool branch_taken_0x146f4c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x146F50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x146F4Cu;
        // 0x146f50: 0x2644bd58  addiu       $a0, $s2, -0x42A8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 4294950232));
        ctx->in_delay_slot = false;
        if (branch_taken_0x146f4c) {
            ctx->pc = 0x146F7Cu;
            goto label_146f7c;
        }
    }
    ctx->pc = 0x146F54u;
    // 0x146f54: 0x8e050004  lw          $a1, 0x4($s0)
    ctx->pc = 0x146f54u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x146f58: 0x10a00002  beqz        $a1, . + 4 + (0x2 << 2)
    ctx->pc = 0x146F58u;
    {
        const bool branch_taken_0x146f58 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x146F5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x146F58u;
        // 0x146f5c: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x146f58) {
            ctx->pc = 0x146F64u;
            goto label_146f64;
        }
    }
    ctx->pc = 0x146F60u;
    // 0x146f60: 0x8cb10000  lw          $s1, 0x0($a1)
    ctx->pc = 0x146f60u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_146f64:
    // 0x146f64: 0xc0f61e8  jal         func_3D87A0
    ctx->pc = 0x146F64u;
    SET_GPR_U32(ctx, 31, 0x146F6Cu);
    ctx->pc = 0x146F68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x146F64u;
    // 0x146f68: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D87A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D87A0u, 0x146F64u, 0x146F6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x146F6Cu;
label_146f6c:
    // 0x146f6c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x146f6cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x146f70: 0xc0f6230  jal         func_3D88C0
    ctx->pc = 0x146F70u;
    SET_GPR_U32(ctx, 31, 0x146F78u);
    ctx->pc = 0x146F74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x146F70u;
    // 0x146f74: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D88C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D88C0u, 0x146F70u, 0x146F78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x146F78u;
label_146f78:
    // 0x146f78: 0x2644bd58  addiu       $a0, $s2, -0x42A8
    ctx->pc = 0x146f78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 4294950232));
label_146f7c:
    // 0x146f7c: 0x8c850004  lw          $a1, 0x4($a0)
    ctx->pc = 0x146f7cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x146f80: 0x10a00002  beqz        $a1, . + 4 + (0x2 << 2)
    ctx->pc = 0x146F80u;
    {
        const bool branch_taken_0x146f80 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x146F84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x146F80u;
        // 0x146f84: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x146f80) {
            ctx->pc = 0x146F8Cu;
            goto label_146f8c;
        }
    }
    ctx->pc = 0x146F88u;
    // 0x146f88: 0x8cb00000  lw          $s0, 0x0($a1)
    ctx->pc = 0x146f88u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_146f8c:
    // 0x146f8c: 0xc0f61e8  jal         func_3D87A0
    ctx->pc = 0x146F8Cu;
    SET_GPR_U32(ctx, 31, 0x146F94u);
    ctx->pc = 0x3D87A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D87A0u, 0x146F8Cu, 0x146F94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x146F94u;
label_146f94:
    // 0x146f94: 0x3c040049  lui         $a0, 0x49
    ctx->pc = 0x146f94u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)73 << 16));
    // 0x146f98: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x146f98u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x146f9c: 0xc0f6230  jal         func_3D88C0
    ctx->pc = 0x146F9Cu;
    SET_GPR_U32(ctx, 31, 0x146FA4u);
    ctx->pc = 0x146FA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x146F9Cu;
    // 0x146fa0: 0x2484bd48  addiu       $a0, $a0, -0x42B8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294950216));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D88C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D88C0u, 0x146F9Cu, 0x146FA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x146FA4u;
label_146fa4:
    // 0x146fa4: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x146fa4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_146fa8:
    // 0x146fa8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x146fa8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x146fac: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x146facu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x146fb0: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x146fb0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x146fb4: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x146fb4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x146fb8: 0x3e00008  jr          $ra
    ctx->pc = 0x146FB8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x146FBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x146FB8u;
        // 0x146fbc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x146FB8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x146FC0u;
}
