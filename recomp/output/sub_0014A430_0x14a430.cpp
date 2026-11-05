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

// Function: sub_0014A430
// Address: 0x14a430 - 0x14a498
void sub_0014A430_0x14a430(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0014A430_0x14a430");
#endif

    switch (ctx->pc) {
        case 0x14a47cu: goto label_14a47c;
        case 0x14a484u: goto label_14a484;
        default: break;
    }

    ctx->pc = 0x14a430u;

    // 0x14a430: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x14a430u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x14a434: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x14a434u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x14a438: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x14a438u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x14a43c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x14a43cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14a440: 0x8e020460  lw          $v0, 0x460($s0)
    ctx->pc = 0x14a440u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1120)));
    // 0x14a444: 0x54400010  bnel        $v0, $zero, . + 4 + (0x10 << 2)
    ctx->pc = 0x14A444u;
    {
        const bool branch_taken_0x14a444 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x14a444) {
            ctx->pc = 0x14A448u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x14A444u;
            // 0x14a448: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x14A488u;
            goto label_14a488;
        }
    }
    ctx->pc = 0x14A44Cu;
    // 0x14a44c: 0xae000560  sw          $zero, 0x560($s0)
    ctx->pc = 0x14a44cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1376), GPR_U32(ctx, 0));
    // 0x14a450: 0x7e000570  sq          $zero, 0x570($s0)
    ctx->pc = 0x14a450u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 1392), GPR_VEC(ctx, 0));
    // 0x14a454: 0xae000580  sw          $zero, 0x580($s0)
    ctx->pc = 0x14a454u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1408), GPR_U32(ctx, 0));
    // 0x14a458: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x14a458u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14a45c: 0xae000584  sw          $zero, 0x584($s0)
    ctx->pc = 0x14a45cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1412), GPR_U32(ctx, 0));
    // 0x14a460: 0xae000588  sw          $zero, 0x588($s0)
    ctx->pc = 0x14a460u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1416), GPR_U32(ctx, 0));
    // 0x14a464: 0xae00058c  sw          $zero, 0x58C($s0)
    ctx->pc = 0x14a464u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1420), GPR_U32(ctx, 0));
    // 0x14a468: 0xae000590  sw          $zero, 0x590($s0)
    ctx->pc = 0x14a468u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1424), GPR_U32(ctx, 0));
    // 0x14a46c: 0xae000594  sw          $zero, 0x594($s0)
    ctx->pc = 0x14a46cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1428), GPR_U32(ctx, 0));
    // 0x14a470: 0xae000598  sw          $zero, 0x598($s0)
    ctx->pc = 0x14a470u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1432), GPR_U32(ctx, 0));
    // 0x14a474: 0xc052d70  jal         func_14B5C0
    ctx->pc = 0x14A474u;
    SET_GPR_U32(ctx, 31, 0x14A47Cu);
    ctx->pc = 0x14A478u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14A474u;
    // 0x14a478: 0xae00059c  sw          $zero, 0x59C($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 1436), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14B5C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14B5C0u, 0x14A474u, 0x14A47Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14A47Cu;
label_14a47c:
    // 0x14a47c: 0xc04d7ea  jal         func_135FA8
    ctx->pc = 0x14A47Cu;
    SET_GPR_U32(ctx, 31, 0x14A484u);
    ctx->pc = 0x14A480u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14A47Cu;
    // 0x14a480: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x135FA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x135FA8u, 0x14A47Cu, 0x14A484u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14A484u;
label_14a484:
    // 0x14a484: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x14a484u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_14a488:
    // 0x14a488: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x14a488u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x14a48c: 0x3e00008  jr          $ra
    ctx->pc = 0x14A48Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14A490u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14A48Cu;
        // 0x14a490: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14A48Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x14A494u;
    // 0x14a494: 0x0  nop
    ctx->pc = 0x14a494u;
    // NOP
    ctx->pc = 0x14a498u;
}
