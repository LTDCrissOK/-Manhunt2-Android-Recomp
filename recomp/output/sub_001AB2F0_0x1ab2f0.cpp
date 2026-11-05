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

// Function: sub_001AB2F0
// Address: 0x1ab2f0 - 0x1ab368
void sub_001AB2F0_0x1ab2f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001AB2F0_0x1ab2f0");
#endif

    switch (ctx->pc) {
        case 0x1ab30cu: goto label_1ab30c;
        case 0x1ab33cu: goto label_1ab33c;
        case 0x1ab348u: goto label_1ab348;
        default: break;
    }

    ctx->pc = 0x1ab2f0u;

    // 0x1ab2f0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1ab2f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1ab2f4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1ab2f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ab2f8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1ab2f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1ab2fc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1ab2fcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ab300: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1ab300u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1ab304: 0xc06a4c2  jal         func_1A9308
    ctx->pc = 0x1AB304u;
    SET_GPR_U32(ctx, 31, 0x1AB30Cu);
    ctx->pc = 0x1AB308u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AB304u;
    // 0x1ab308: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A9308u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A9308u, 0x1AB304u, 0x1AB30Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AB30Cu;
label_1ab30c:
    // 0x1ab30c: 0x8e020160  lw          $v0, 0x160($s0)
    ctx->pc = 0x1ab30cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 352)));
    // 0x1ab310: 0x50400011  beql        $v0, $zero, . + 4 + (0x11 << 2)
    ctx->pc = 0x1AB310u;
    {
        const bool branch_taken_0x1ab310 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ab310) {
            ctx->pc = 0x1AB314u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1AB310u;
            // 0x1ab314: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1AB358u;
            goto label_1ab358;
        }
    }
    ctx->pc = 0x1AB318u;
    // 0x1ab318: 0x8e020090  lw          $v0, 0x90($s0)
    ctx->pc = 0x1ab318u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 144)));
    // 0x1ab31c: 0x28420514  slti        $v0, $v0, 0x514
    ctx->pc = 0x1ab31cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)1300) ? 1 : 0);
    // 0x1ab320: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1AB320u;
    {
        const bool branch_taken_0x1ab320 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AB324u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AB320u;
        // 0x1ab324: 0x24020024  addiu       $v0, $zero, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ab320) {
            ctx->pc = 0x1AB348u;
            goto label_1ab348;
        }
    }
    ctx->pc = 0x1AB328u;
    // 0x1ab328: 0x8e03014c  lw          $v1, 0x14C($s0)
    ctx->pc = 0x1ab328u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 332)));
    // 0x1ab32c: 0x54620007  bnel        $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1AB32Cu;
    {
        const bool branch_taken_0x1ab32c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1ab32c) {
            ctx->pc = 0x1AB330u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1AB32Cu;
            // 0x1ab330: 0x8e020160  lw          $v0, 0x160($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 352)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1AB34Cu;
            goto label_1ab34c;
        }
    }
    ctx->pc = 0x1AB334u;
    // 0x1ab334: 0xc069ab8  jal         func_1A6AE0
    ctx->pc = 0x1AB334u;
    SET_GPR_U32(ctx, 31, 0x1AB33Cu);
    ctx->pc = 0x1AB338u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AB334u;
    // 0x1ab338: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A6AE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A6AE0u, 0x1AB334u, 0x1AB33Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AB33Cu;
label_1ab33c:
    // 0x1ab33c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1ab33cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ab340: 0xc06a23e  jal         func_1A88F8
    ctx->pc = 0x1AB340u;
    SET_GPR_U32(ctx, 31, 0x1AB348u);
    ctx->pc = 0x1AB344u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AB340u;
    // 0x1ab344: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A88F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A88F8u, 0x1AB340u, 0x1AB348u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AB348u;
label_1ab348:
    // 0x1ab348: 0x8e020160  lw          $v0, 0x160($s0)
    ctx->pc = 0x1ab348u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 352)));
label_1ab34c:
    // 0x1ab34c: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x1AB34Cu;
    {
        const bool branch_taken_0x1ab34c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ab34c) {
            ctx->pc = 0x1AB350u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1AB34Cu;
            // 0x1ab350: 0xae000164  sw          $zero, 0x164($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 356), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1AB354u;
            goto label_1ab354;
        }
    }
    ctx->pc = 0x1AB354u;
label_1ab354:
    // 0x1ab354: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1ab354u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1ab358:
    // 0x1ab358: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1ab358u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1ab35c: 0x3e00008  jr          $ra
    ctx->pc = 0x1AB35Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1AB360u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AB35Cu;
        // 0x1ab360: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AB35Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1AB364u;
    // 0x1ab364: 0x0  nop
    ctx->pc = 0x1ab364u;
    // NOP
    ctx->pc = 0x1ab368u;
}
