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

// Function: sub_00327160
// Address: 0x327160 - 0x3271e0
void sub_00327160_0x327160(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00327160_0x327160");
#endif

    switch (ctx->pc) {
        case 0x32718cu: goto label_32718c;
        case 0x32719cu: goto label_32719c;
        case 0x3271bcu: goto label_3271bc;
        default: break;
    }

    ctx->pc = 0x327160u;

    // 0x327160: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x327160u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x327164: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x327164u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x327168: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x327168u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x32716c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x32716cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x327170: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x327170u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x327174: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x327174u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x327178: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x327178u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x32717c: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x32717cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x327180: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x327180u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x327184: 0xc0c9c00  jal         func_327000
    ctx->pc = 0x327184u;
    SET_GPR_U32(ctx, 31, 0x32718Cu);
    ctx->pc = 0x327188u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x327184u;
    // 0x327188: 0x26040014  addiu       $a0, $s0, 0x14 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 20));
    ctx->in_delay_slot = false;
    ctx->pc = 0x327000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x327000u, 0x327184u, 0x32718Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32718Cu;
label_32718c:
    // 0x32718c: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x32718Cu;
    {
        const bool branch_taken_0x32718c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x327190u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32718Cu;
        // 0x327190: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32718c) {
            ctx->pc = 0x3271C4u;
            goto label_3271c4;
        }
    }
    ctx->pc = 0x327194u;
    // 0x327194: 0xc0f5240  jal         func_3D4900
    ctx->pc = 0x327194u;
    SET_GPR_U32(ctx, 31, 0x32719Cu);
    ctx->pc = 0x327198u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x327194u;
    // 0x327198: 0x240404ac  addiu       $a0, $zero, 0x4AC (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1196));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4900u, 0x327194u, 0x32719Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32719Cu;
label_32719c:
    // 0x32719c: 0x8e0a0008  lw          $t2, 0x8($s0)
    ctx->pc = 0x32719cu;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x3271a0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x3271a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3271a4: 0x8e060010  lw          $a2, 0x10($s0)
    ctx->pc = 0x3271a4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x3271a8: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x3271a8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3271ac: 0x8e07000c  lw          $a3, 0xC($s0)
    ctx->pc = 0x3271acu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x3271b0: 0x96080004  lhu         $t0, 0x4($s0)
    ctx->pc = 0x3271b0u;
    SET_GPR_ZE32(ctx, 8, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x3271b4: 0xc0cdb4e  jal         func_336D38
    ctx->pc = 0x3271B4u;
    SET_GPR_U32(ctx, 31, 0x3271BCu);
    ctx->pc = 0x3271B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3271B4u;
    // 0x3271b8: 0x96090002  lhu         $t1, 0x2($s0) (Delay Slot)
    SET_GPR_ZE32(ctx, 9, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x336D38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x336D38u, 0x3271B4u, 0x3271BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3271BCu;
label_3271bc:
    // 0x3271bc: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x3271bcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3271c0: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x3271c0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3271c4:
    // 0x3271c4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3271c4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3271c8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x3271c8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x3271cc: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x3271ccu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3271d0: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x3271d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3271d4: 0x3e00008  jr          $ra
    ctx->pc = 0x3271D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3271D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3271D4u;
        // 0x3271d8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3271D4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3271DCu;
    // 0x3271dc: 0x0  nop
    ctx->pc = 0x3271dcu;
    // NOP
    ctx->pc = 0x3271e0u;
}
