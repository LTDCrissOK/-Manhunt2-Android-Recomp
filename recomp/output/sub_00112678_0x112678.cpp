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

// Function: sub_00112678
// Address: 0x112678 - 0x112720
void sub_00112678_0x112678(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00112678_0x112678");
#endif

    switch (ctx->pc) {
        case 0x11269cu: goto label_11269c;
        case 0x1126acu: goto label_1126ac;
        case 0x1126c8u: goto label_1126c8;
        case 0x1126d0u: goto label_1126d0;
        case 0x1126e0u: goto label_1126e0;
        case 0x1126f8u: goto label_1126f8;
        case 0x112708u: goto label_112708;
        default: break;
    }

    ctx->pc = 0x112678u;

    // 0x112678: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x112678u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x11267c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x11267cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x112680: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x112680u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x112684: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x112684u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x112688: 0x8e040018  lw          $a0, 0x18($s0)
    ctx->pc = 0x112688u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x11268c: 0x50800009  beql        $a0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x11268Cu;
    {
        const bool branch_taken_0x11268c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x11268c) {
            ctx->pc = 0x112690u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x11268Cu;
            // 0x112690: 0x8e02001c  lw          $v0, 0x1C($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1126B4u;
            goto label_1126b4;
        }
    }
    ctx->pc = 0x112694u;
    // 0x112694: 0xc04ca24  jal         func_132890
    ctx->pc = 0x112694u;
    SET_GPR_U32(ctx, 31, 0x11269Cu);
    ctx->pc = 0x132890u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x132890u, 0x112694u, 0x11269Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11269Cu;
label_11269c:
    // 0x11269c: 0x3c040049  lui         $a0, 0x49
    ctx->pc = 0x11269cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)73 << 16));
    // 0x1126a0: 0x8e050018  lw          $a1, 0x18($s0)
    ctx->pc = 0x1126a0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x1126a4: 0xc0420f4  jal         func_1083D0
    ctx->pc = 0x1126A4u;
    SET_GPR_U32(ctx, 31, 0x1126ACu);
    ctx->pc = 0x1126A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1126A4u;
    // 0x1126a8: 0x24848758  addiu       $a0, $a0, -0x78A8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294936408));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1083D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1083D0u, 0x1126A4u, 0x1126ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1126ACu;
label_1126ac:
    // 0x1126ac: 0xae000018  sw          $zero, 0x18($s0)
    ctx->pc = 0x1126acu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 0));
    // 0x1126b0: 0x8e02001c  lw          $v0, 0x1C($s0)
    ctx->pc = 0x1126b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_1126b4:
    // 0x1126b4: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x1126B4u;
    {
        const bool branch_taken_0x1126b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1126B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1126B4u;
        // 0x1126b8: 0x3c040049  lui         $a0, 0x49 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)73 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1126b4) {
            ctx->pc = 0x1126E4u;
            goto label_1126e4;
        }
    }
    ctx->pc = 0x1126BCu;
    // 0x1126bc: 0x8e050010  lw          $a1, 0x10($s0)
    ctx->pc = 0x1126bcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x1126c0: 0xc04ad62  jal         func_12B588
    ctx->pc = 0x1126C0u;
    SET_GPR_U32(ctx, 31, 0x1126C8u);
    ctx->pc = 0x1126C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1126C0u;
    // 0x1126c4: 0x2484b060  addiu       $a0, $a0, -0x4FA0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294946912));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12B588u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12B588u, 0x1126C0u, 0x1126C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1126C8u;
label_1126c8:
    // 0x1126c8: 0xc05dce2  jal         func_177388
    ctx->pc = 0x1126C8u;
    SET_GPR_U32(ctx, 31, 0x1126D0u);
    ctx->pc = 0x1126CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1126C8u;
    // 0x1126cc: 0x8e04001c  lw          $a0, 0x1C($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x177388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x177388u, 0x1126C8u, 0x1126D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1126D0u;
label_1126d0:
    // 0x1126d0: 0x3c040049  lui         $a0, 0x49
    ctx->pc = 0x1126d0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)73 << 16));
    // 0x1126d4: 0x8e05001c  lw          $a1, 0x1C($s0)
    ctx->pc = 0x1126d4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x1126d8: 0xc0420ba  jal         func_1082E8
    ctx->pc = 0x1126D8u;
    SET_GPR_U32(ctx, 31, 0x1126E0u);
    ctx->pc = 0x1126DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1126D8u;
    // 0x1126dc: 0x24848758  addiu       $a0, $a0, -0x78A8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294936408));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1082E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1082E8u, 0x1126D8u, 0x1126E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1126E0u;
label_1126e0:
    // 0x1126e0: 0xae00001c  sw          $zero, 0x1C($s0)
    ctx->pc = 0x1126e0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 0));
label_1126e4:
    // 0x1126e4: 0x8e040020  lw          $a0, 0x20($s0)
    ctx->pc = 0x1126e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x1126e8: 0x50800009  beql        $a0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x1126E8u;
    {
        const bool branch_taken_0x1126e8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1126e8) {
            ctx->pc = 0x1126ECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1126E8u;
            // 0x1126ec: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x112710u;
            goto label_112710;
        }
    }
    ctx->pc = 0x1126F0u;
    // 0x1126f0: 0xc05fc10  jal         func_17F040
    ctx->pc = 0x1126F0u;
    SET_GPR_U32(ctx, 31, 0x1126F8u);
    ctx->pc = 0x17F040u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17F040u, 0x1126F0u, 0x1126F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1126F8u;
label_1126f8:
    // 0x1126f8: 0x3c040049  lui         $a0, 0x49
    ctx->pc = 0x1126f8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)73 << 16));
    // 0x1126fc: 0x8e050020  lw          $a1, 0x20($s0)
    ctx->pc = 0x1126fcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x112700: 0xc042108  jal         func_108420
    ctx->pc = 0x112700u;
    SET_GPR_U32(ctx, 31, 0x112708u);
    ctx->pc = 0x112704u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x112700u;
    // 0x112704: 0x24848758  addiu       $a0, $a0, -0x78A8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294936408));
    ctx->in_delay_slot = false;
    ctx->pc = 0x108420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108420u, 0x112700u, 0x112708u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x112708u;
label_112708:
    // 0x112708: 0xae000020  sw          $zero, 0x20($s0)
    ctx->pc = 0x112708u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 0));
    // 0x11270c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x11270cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_112710:
    // 0x112710: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x112710u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x112714: 0x3e00008  jr          $ra
    ctx->pc = 0x112714u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x112718u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x112714u;
        // 0x112718: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x112714u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11271Cu;
    // 0x11271c: 0x0  nop
    ctx->pc = 0x11271cu;
    // NOP
    ctx->pc = 0x112720u;
}
