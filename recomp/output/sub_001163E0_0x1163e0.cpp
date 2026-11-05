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

// Function: sub_001163E0
// Address: 0x1163e0 - 0x116448
void sub_001163E0_0x1163e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001163E0_0x1163e0");
#endif

    switch (ctx->pc) {
        case 0x116418u: goto label_116418;
        default: break;
    }

    ctx->pc = 0x1163e0u;

    // 0x1163e0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1163e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1163e4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1163e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1163e8: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1163e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1163ec: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1163ecu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1163f0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1163f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1163f4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1163f4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1163f8: 0x8e24000c  lw          $a0, 0xC($s1)
    ctx->pc = 0x1163f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x1163fc: 0x8c82036c  lw          $v0, 0x36C($a0)
    ctx->pc = 0x1163fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 876)));
    // 0x116400: 0x30420010  andi        $v0, $v0, 0x10
    ctx->pc = 0x116400u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16);
    // 0x116404: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x116404u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x116408: 0x10500009  beq         $v0, $s0, . + 4 + (0x9 << 2)
    ctx->pc = 0x116408u;
    {
        const bool branch_taken_0x116408 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 16));
        ctx->pc = 0x11640Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x116408u;
        // 0x11640c: 0x24050010  addiu       $a1, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x116408) {
            ctx->pc = 0x116430u;
            goto label_116430;
        }
    }
    ctx->pc = 0x116410u;
    // 0x116410: 0xc08fed2  jal         func_23FB48
    ctx->pc = 0x116410u;
    SET_GPR_U32(ctx, 31, 0x116418u);
    ctx->pc = 0x116414u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x116410u;
    // 0x116414: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23FB48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23FB48u, 0x116410u, 0x116418u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x116418u;
label_116418:
    // 0x116418: 0x12000004  beqz        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x116418u;
    {
        const bool branch_taken_0x116418 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x11641Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x116418u;
        // 0x11641c: 0x3c02004c  lui         $v0, 0x4C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)76 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x116418) {
            ctx->pc = 0x11642Cu;
            goto label_11642c;
        }
    }
    ctx->pc = 0x116420u;
    // 0x116420: 0x8e23000c  lw          $v1, 0xC($s1)
    ctx->pc = 0x116420u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x116424: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x116424u;
    {
        const bool branch_taken_0x116424 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x116428u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x116424u;
        // 0x116428: 0xac43f14c  sw          $v1, -0xEB4($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4294963532), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x116424) {
            ctx->pc = 0x116430u;
            goto label_116430;
        }
    }
    ctx->pc = 0x11642Cu;
label_11642c:
    // 0x11642c: 0xac40f14c  sw          $zero, -0xEB4($v0)
    ctx->pc = 0x11642cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294963532), GPR_U32(ctx, 0));
label_116430:
    // 0x116430: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x116430u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x116434: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x116434u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x116438: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x116438u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x11643c: 0x3e00008  jr          $ra
    ctx->pc = 0x11643Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x116440u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11643Cu;
        // 0x116440: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11643Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x116444u;
    // 0x116444: 0x0  nop
    ctx->pc = 0x116444u;
    // NOP
    ctx->pc = 0x116448u;
}
