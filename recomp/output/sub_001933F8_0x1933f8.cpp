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

// Function: sub_001933F8
// Address: 0x1933f8 - 0x193470
void sub_001933F8_0x1933f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001933F8_0x1933f8");
#endif

    switch (ctx->pc) {
        case 0x193420u: goto label_193420;
        case 0x193448u: goto label_193448;
        default: break;
    }

    ctx->pc = 0x1933f8u;

    // 0x1933f8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1933f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1933fc: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1933fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x193400: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x193400u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x193404: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x193404u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x193408: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x193408u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19340c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x19340cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x193410: 0x8e301004  lw          $s0, 0x1004($s1)
    ctx->pc = 0x193410u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4100)));
    // 0x193414: 0x8e040ff8  lw          $a0, 0xFF8($s0)
    ctx->pc = 0x193414u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4088)));
    // 0x193418: 0xc0f6da6  jal         func_3DB698
    ctx->pc = 0x193418u;
    SET_GPR_U32(ctx, 31, 0x193420u);
    ctx->pc = 0x19341Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x193418u;
    // 0x19341c: 0x24840018  addiu       $a0, $a0, 0x18 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 24));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DB698u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DB698u, 0x193418u, 0x193420u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x193420u;
label_193420:
    // 0x193420: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x193420u;
    {
        const bool branch_taken_0x193420 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x193424u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x193420u;
        // 0x193424: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x193420) {
            ctx->pc = 0x193458u;
            goto label_193458;
        }
    }
    ctx->pc = 0x193428u;
    // 0x193428: 0x8e020ff8  lw          $v0, 0xFF8($s0)
    ctx->pc = 0x193428u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4088)));
    // 0x19342c: 0x3c040800  lui         $a0, 0x800
    ctx->pc = 0x19342cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)2048 << 16));
    // 0x193430: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x193430u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x193434: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x193434u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x193438: 0x50640007  beql        $v1, $a0, . + 4 + (0x7 << 2)
    ctx->pc = 0x193438u;
    {
        const bool branch_taken_0x193438 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        if (branch_taken_0x193438) {
            ctx->pc = 0x19343Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x193438u;
            // 0x19343c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x193458u;
            goto label_193458;
        }
    }
    ctx->pc = 0x193440u;
    // 0x193440: 0xc064e2c  jal         func_1938B0
    ctx->pc = 0x193440u;
    SET_GPR_U32(ctx, 31, 0x193448u);
    ctx->pc = 0x193444u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x193440u;
    // 0x193444: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1938B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1938B0u, 0x193440u, 0x193448u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x193448u;
label_193448:
    // 0x193448: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x193448u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19344c: 0x14600002  bnez        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x19344Cu;
    {
        const bool branch_taken_0x19344c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x193450u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19344Cu;
        // 0x193450: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19344c) {
            ctx->pc = 0x193458u;
            goto label_193458;
        }
    }
    ctx->pc = 0x193454u;
    // 0x193454: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x193454u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_193458:
    // 0x193458: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x193458u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19345c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x19345cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x193460: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x193460u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x193464: 0x3e00008  jr          $ra
    ctx->pc = 0x193464u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x193468u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x193464u;
        // 0x193468: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x193464u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19346Cu;
    // 0x19346c: 0x0  nop
    ctx->pc = 0x19346cu;
    // NOP
    ctx->pc = 0x193470u;
}
