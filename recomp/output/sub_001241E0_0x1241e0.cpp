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

// Function: sub_001241E0
// Address: 0x1241e0 - 0x124298
void sub_001241E0_0x1241e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001241E0_0x1241e0");
#endif

    switch (ctx->pc) {
        case 0x124220u: goto label_124220;
        case 0x12423cu: goto label_12423c;
        case 0x124264u: goto label_124264;
        default: break;
    }

    ctx->pc = 0x1241e0u;

    // 0x1241e0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1241e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1241e4: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x1241e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x1241e8: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x1241e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x1241ec: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x1241ecu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1241f0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1241f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1241f4: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x1241f4u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1241f8: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1241f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1241fc: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x1241fcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x124200: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x124200u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x124204: 0xe0882d  daddu       $s1, $a3, $zero
    ctx->pc = 0x124204u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x124208: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x124208u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x12420c: 0x100902d  daddu       $s2, $t0, $zero
    ctx->pc = 0x12420cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x124210: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x124210u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x124214: 0x120982d  daddu       $s3, $t1, $zero
    ctx->pc = 0x124214u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x124218: 0xc0efc2e  jal         func_3BF0B8
    ctx->pc = 0x124218u;
    SET_GPR_U32(ctx, 31, 0x124220u);
    ctx->pc = 0x12421Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x124218u;
    // 0x12421c: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BF0B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BF0B8u, 0x124218u, 0x124220u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x124220u;
label_124220:
    // 0x124220: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x124220u;
    {
        const bool branch_taken_0x124220 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x124224u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x124220u;
        // 0x124224: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x124220) {
            ctx->pc = 0x12426Cu;
            goto label_12426c;
        }
    }
    ctx->pc = 0x124228u;
    // 0x124228: 0x16020011  bne         $s0, $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x124228u;
    {
        const bool branch_taken_0x124228 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x12422Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x124228u;
        // 0x12422c: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x124228) {
            ctx->pc = 0x124270u;
            goto label_124270;
        }
    }
    ctx->pc = 0x124230u;
    // 0x124230: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x124230u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x124234: 0xc04a2fc  jal         func_128BF0
    ctx->pc = 0x124234u;
    SET_GPR_U32(ctx, 31, 0x12423Cu);
    ctx->pc = 0x124238u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x124234u;
    // 0x124238: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x128BF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x128BF0u, 0x124234u, 0x12423Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12423Cu;
label_12423c:
    // 0x12423c: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x12423cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x124240: 0x272102b  sltu        $v0, $s3, $s2
    ctx->pc = 0x124240u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 18)) ? 1 : 0);
    // 0x124244: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x124244u;
    {
        const bool branch_taken_0x124244 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x124248u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x124244u;
        // 0x124248: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x124244) {
            ctx->pc = 0x124270u;
            goto label_124270;
        }
    }
    ctx->pc = 0x12424Cu;
    // 0x12424c: 0x8e840078  lw          $a0, 0x78($s4)
    ctx->pc = 0x12424cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 120)));
    // 0x124250: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x124250u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x124254: 0x240402d  daddu       $t0, $s2, $zero
    ctx->pc = 0x124254u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x124258: 0x260482d  daddu       $t1, $s3, $zero
    ctx->pc = 0x124258u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12425c: 0xc042c50  jal         func_10B140
    ctx->pc = 0x12425Cu;
    SET_GPR_U32(ctx, 31, 0x124264u);
    ctx->pc = 0x124260u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12425Cu;
    // 0x124260: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10B140u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10B140u, 0x12425Cu, 0x124264u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x124264u;
label_124264:
    // 0x124264: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x124264u;
    {
        const bool branch_taken_0x124264 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x124268u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x124264u;
        // 0x124268: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x124264) {
            ctx->pc = 0x124270u;
            goto label_124270;
        }
    }
    ctx->pc = 0x12426Cu;
label_12426c:
    // 0x12426c: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x12426cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_124270:
    // 0x124270: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x124270u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x124274: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x124274u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x124278: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x124278u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x12427c: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x12427cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x124280: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x124280u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x124284: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x124284u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x124288: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x124288u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x12428c: 0x3e00008  jr          $ra
    ctx->pc = 0x12428Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x124290u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12428Cu;
        // 0x124290: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12428Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x124294u;
    // 0x124294: 0x0  nop
    ctx->pc = 0x124294u;
    // NOP
    ctx->pc = 0x124298u;
}
