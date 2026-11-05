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

// Function: sub_003CF870
// Address: 0x3cf870 - 0x3cf8e8
void sub_003CF870_0x3cf870(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003CF870_0x3cf870");
#endif

    switch (ctx->pc) {
        case 0x3cf8ccu: goto label_3cf8cc;
        default: break;
    }

    ctx->pc = 0x3cf870u;

    // 0x3cf870: 0x3c030043  lui         $v1, 0x43
    ctx->pc = 0x3cf870u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)67 << 16));
    // 0x3cf874: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x3cf874u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x3cf878: 0x8c62d6a4  lw          $v0, -0x295C($v1)
    ctx->pc = 0x3cf878u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x42D6A4u));
    // 0x3cf87c: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x3cf87cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3cf880: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x3cf880u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x3cf884: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3CF884u;
    {
        const bool branch_taken_0x3cf884 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x3CF888u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CF884u;
        // 0x3cf888: 0xffb00010  sd          $s0, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3cf884) {
            ctx->pc = 0x3CF894u;
            goto label_3cf894;
        }
    }
    ctx->pc = 0x3CF88Cu;
    // 0x3cf88c: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x3CF88Cu;
    {
        const bool branch_taken_0x3cf88c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3CF890u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CF88Cu;
        // 0x3cf890: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3cf88c) {
            ctx->pc = 0x3CF8D8u;
            goto label_3cf8d8;
        }
    }
    ctx->pc = 0x3CF894u;
label_3cf894:
    // 0x3cf894: 0x3c070066  lui         $a3, 0x66
    ctx->pc = 0x3cf894u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)102 << 16));
    // 0x3cf898: 0x3c040066  lui         $a0, 0x66
    ctx->pc = 0x3cf898u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)102 << 16));
    // 0x3cf89c: 0xace551c0  sw          $a1, 0x51C0($a3)
    ctx->pc = 0x3cf89cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 5)); ps2TraceGuestWrite(rdram, 0x6651C0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6651C0u, _value); } while (0);
    // 0x3cf8a0: 0x3c100066  lui         $s0, 0x66
    ctx->pc = 0x3cf8a0u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)102 << 16));
    // 0x3cf8a4: 0x24845140  addiu       $a0, $a0, 0x5140
    ctx->pc = 0x3cf8a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 20800));
    // 0x3cf8a8: 0x24e751c0  addiu       $a3, $a3, 0x51C0
    ctx->pc = 0x3cf8a8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 20928));
    // 0x3cf8ac: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x3cf8acu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x3cf8b0: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x3cf8b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3cf8b4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3cf8b4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3cf8b8: 0x24080004  addiu       $t0, $zero, 0x4
    ctx->pc = 0x3cf8b8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x3cf8bc: 0x26095180  addiu       $t1, $s0, 0x5180
    ctx->pc = 0x3cf8bcu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 16), 20864));
    // 0x3cf8c0: 0x240a0004  addiu       $t2, $zero, 0x4
    ctx->pc = 0x3cf8c0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x3cf8c4: 0xc0f347c  jal         func_3CD1F0
    ctx->pc = 0x3CF8C4u;
    SET_GPR_U32(ctx, 31, 0x3CF8CCu);
    ctx->pc = 0x3CF8C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3CF8C4u;
    // 0x3cf8c8: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3CD1F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3CD1F0u, 0x3CF8C4u, 0x3CF8CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CF8CCu;
label_3cf8cc:
    // 0x3cf8cc: 0x4410002  bgez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x3CF8CCu;
    {
        const bool branch_taken_0x3cf8cc = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x3CF8D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CF8CCu;
        // 0x3cf8d0: 0x8e025180  lw          $v0, 0x5180($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20864)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3cf8cc) {
            ctx->pc = 0x3CF8D8u;
            goto label_3cf8d8;
        }
    }
    ctx->pc = 0x3CF8D4u;
    // 0x3cf8d4: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x3cf8d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_3cf8d8:
    // 0x3cf8d8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x3cf8d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3cf8dc: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x3cf8dcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3cf8e0: 0x3e00008  jr          $ra
    ctx->pc = 0x3CF8E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3CF8E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CF8E0u;
        // 0x3cf8e4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3CF8E0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3CF8E8u;
}
