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

// Function: sub_00236698
// Address: 0x236698 - 0x2366f0
void sub_00236698_0x236698(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00236698_0x236698");
#endif

    switch (ctx->pc) {
        case 0x2366b4u: goto label_2366b4;
        case 0x2366bcu: goto label_2366bc;
        case 0x2366ccu: goto label_2366cc;
        default: break;
    }

    ctx->pc = 0x236698u;

    // 0x236698: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x236698u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x23669c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x23669cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2366a0: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2366a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2366a4: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x2366a4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2366a8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2366a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2366ac: 0xc08959e  jal         func_225678
    ctx->pc = 0x2366ACu;
    SET_GPR_U32(ctx, 31, 0x2366B4u);
    ctx->pc = 0x2366B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2366ACu;
    // 0x2366b0: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x225678u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x225678u, 0x2366ACu, 0x2366B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2366B4u;
label_2366b4:
    // 0x2366b4: 0xc0899bc  jal         func_2266F0
    ctx->pc = 0x2366B4u;
    SET_GPR_U32(ctx, 31, 0x2366BCu);
    ctx->pc = 0x2366B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2366B4u;
    // 0x2366b8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2266F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2266F0u, 0x2366B4u, 0x2366BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2366BCu;
label_2366bc:
    // 0x2366bc: 0x16020005  bne         $s0, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2366BCu;
    {
        const bool branch_taken_0x2366bc = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x2366C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2366BCu;
        // 0x2366c0: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2366bc) {
            ctx->pc = 0x2366D4u;
            goto label_2366d4;
        }
    }
    ctx->pc = 0x2366C4u;
    // 0x2366c4: 0xc08ba82  jal         func_22EA08
    ctx->pc = 0x2366C4u;
    SET_GPR_U32(ctx, 31, 0x2366CCu);
    ctx->pc = 0x2366C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2366C4u;
    // 0x2366c8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22EA08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22EA08u, 0x2366C4u, 0x2366CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2366CCu;
label_2366cc:
    // 0x2366cc: 0xae2004f4  sw          $zero, 0x4F4($s1)
    ctx->pc = 0x2366ccu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1268), GPR_U32(ctx, 0));
    // 0x2366d0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2366d0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2366d4:
    // 0x2366d4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2366d4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2366d8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2366d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2366dc: 0x3e00008  jr          $ra
    ctx->pc = 0x2366DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2366E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2366DCu;
        // 0x2366e0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2366DCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2366E4u;
    // 0x2366e4: 0x0  nop
    ctx->pc = 0x2366e4u;
    // NOP
    // 0x2366e8: 0x27bd00a0  addiu       $sp, $sp, 0xA0
    ctx->pc = 0x2366e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x2366ec: 0x0  nop
    ctx->pc = 0x2366ecu;
    // NOP
    ctx->pc = 0x2366f0u;
}
