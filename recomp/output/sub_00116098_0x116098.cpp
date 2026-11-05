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

// Function: sub_00116098
// Address: 0x116098 - 0x116128
void sub_00116098_0x116098(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00116098_0x116098");
#endif

    switch (ctx->pc) {
        case 0x1160e8u: goto label_1160e8;
        default: break;
    }

    ctx->pc = 0x116098u;

    // 0x116098: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x116098u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x11609c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x11609cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1160a0: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1160a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1160a4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1160a4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1160a8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1160a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1160ac: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1160acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1160b0: 0x31043  sra         $v0, $v1, 1
    ctx->pc = 0x1160b0u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 1));
    // 0x1160b4: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1160b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1160b8: 0x10400016  beqz        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x1160B8u;
    {
        const bool branch_taken_0x1160b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1160BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1160B8u;
        // 0x1160bc: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1160b8) {
            ctx->pc = 0x116114u;
            goto label_116114;
        }
    }
    ctx->pc = 0x1160C0u;
    // 0x1160c0: 0x16200003  bnez        $s1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1160C0u;
    {
        const bool branch_taken_0x1160c0 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x1160C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1160C0u;
        // 0x1160c4: 0x34620008  ori         $v0, $v1, 0x8 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)8);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1160c0) {
            ctx->pc = 0x1160D0u;
            goto label_1160d0;
        }
    }
    ctx->pc = 0x1160C8u;
    // 0x1160c8: 0x2402fff7  addiu       $v0, $zero, -0x9
    ctx->pc = 0x1160c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967287));
    // 0x1160cc: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x1160ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_1160d0:
    // 0x1160d0: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x1160d0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x1160d4: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x1160d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1160d8: 0x5080000f  beql        $a0, $zero, . + 4 + (0xF << 2)
    ctx->pc = 0x1160D8u;
    {
        const bool branch_taken_0x1160d8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1160d8) {
            ctx->pc = 0x1160DCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1160D8u;
            // 0x1160dc: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x116118u;
            goto label_116118;
        }
    }
    ctx->pc = 0x1160E0u;
    // 0x1160e0: 0xc0899bc  jal         func_2266F0
    ctx->pc = 0x1160E0u;
    SET_GPR_U32(ctx, 31, 0x1160E8u);
    ctx->pc = 0x2266F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2266F0u, 0x1160E0u, 0x1160E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1160E8u;
label_1160e8:
    // 0x1160e8: 0x5040000b  beql        $v0, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x1160E8u;
    {
        const bool branch_taken_0x1160e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1160e8) {
            ctx->pc = 0x1160ECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1160E8u;
            // 0x1160ec: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x116118u;
            goto label_116118;
        }
    }
    ctx->pc = 0x1160F0u;
    // 0x1160f0: 0x12200004  beqz        $s1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1160F0u;
    {
        const bool branch_taken_0x1160f0 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1160F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1160F0u;
        // 0x1160f4: 0x2403fff7  addiu       $v1, $zero, -0x9 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967287));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1160f0) {
            ctx->pc = 0x116104u;
            goto label_116104;
        }
    }
    ctx->pc = 0x1160F8u;
    // 0x1160f8: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1160f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1160fc: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1160FCu;
    {
        const bool branch_taken_0x1160fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x116100u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1160FCu;
        // 0x116100: 0x34420004  ori         $v0, $v0, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1160fc) {
            ctx->pc = 0x11610Cu;
            goto label_11610c;
        }
    }
    ctx->pc = 0x116104u;
label_116104:
    // 0x116104: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x116104u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x116108: 0x2403fffb  addiu       $v1, $zero, -0x5
    ctx->pc = 0x116108u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967291));
label_11610c:
    // 0x11610c: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x11610cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x116110: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x116110u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_116114:
    // 0x116114: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x116114u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_116118:
    // 0x116118: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x116118u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x11611c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x11611cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x116120: 0x3e00008  jr          $ra
    ctx->pc = 0x116120u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x116124u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x116120u;
        // 0x116124: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x116120u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x116128u;
}
