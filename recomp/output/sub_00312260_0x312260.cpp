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

// Function: sub_00312260
// Address: 0x312260 - 0x3122d8
void sub_00312260_0x312260(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00312260_0x312260");
#endif

    switch (ctx->pc) {
        case 0x312260u: goto label_312260;
        case 0x312264u: goto label_312264;
        case 0x312268u: goto label_312268;
        case 0x31226cu: goto label_31226c;
        case 0x312270u: goto label_312270;
        case 0x312274u: goto label_312274;
        case 0x312278u: goto label_312278;
        case 0x31227cu: goto label_31227c;
        case 0x312280u: goto label_312280;
        case 0x312284u: goto label_312284;
        case 0x312288u: goto label_312288;
        case 0x31228cu: goto label_31228c;
        case 0x312290u: goto label_312290;
        case 0x312294u: goto label_312294;
        case 0x312298u: goto label_312298;
        case 0x31229cu: goto label_31229c;
        case 0x3122a0u: goto label_3122a0;
        case 0x3122a4u: goto label_3122a4;
        case 0x3122a8u: goto label_3122a8;
        case 0x3122acu: goto label_3122ac;
        case 0x3122b0u: goto label_3122b0;
        case 0x3122b4u: goto label_3122b4;
        case 0x3122b8u: goto label_3122b8;
        case 0x3122bcu: goto label_3122bc;
        case 0x3122c0u: goto label_3122c0;
        case 0x3122c4u: goto label_3122c4;
        case 0x3122c8u: goto label_3122c8;
        case 0x3122ccu: goto label_3122cc;
        case 0x3122d0u: goto label_3122d0;
        case 0x3122d4u: goto label_3122d4;
        default: break;
    }

    ctx->pc = 0x312260u;

label_312260:
    // 0x312260: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x312260u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_312264:
    // 0x312264: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x312264u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_312268:
    // 0x312268: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x312268u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_31226c:
    // 0x31226c: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x31226cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_312270:
    // 0x312270: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x312270u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_312274:
    // 0x312274: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x312274u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
label_312278:
    // 0x312278: 0x8c820010  lw          $v0, 0x10($a0)
    ctx->pc = 0x312278u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
label_31227c:
    // 0x31227c: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
label_312280:
    if (ctx->pc == 0x312280u) {
        ctx->pc = 0x312280u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31227Cu;
        // 0x312280: 0xa0902d  daddu       $s2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x312284u;
        goto label_312284;
    }
    ctx->pc = 0x31227Cu;
    {
        const bool branch_taken_0x31227c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x312280u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31227Cu;
        // 0x312280: 0xa0902d  daddu       $s2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31227c) {
            ctx->pc = 0x3122A4u;
            goto label_3122a4;
        }
    }
    ctx->pc = 0x312284u;
label_312284:
    // 0x312284: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x312284u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_312288:
    // 0x312288: 0x8c500004  lw          $s0, 0x4($v0)
    ctx->pc = 0x312288u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_31228c:
    // 0x31228c: 0x240f809  jalr        $s2
label_312290:
    if (ctx->pc == 0x312290u) {
        ctx->pc = 0x312290u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31228Cu;
        // 0x312290: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x312294u;
        goto label_312294;
    }
    ctx->pc = 0x31228Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 18);
        SET_GPR_U32(ctx, 31, 0x312294u);
        ctx->pc = 0x312290u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31228Cu;
        // 0x312290: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x31228Cu, 0x312294u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x312294u;
label_312294:
    // 0x312294: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_312298:
    if (ctx->pc == 0x312298u) {
        ctx->pc = 0x312298u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x312294u;
        // 0x312298: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31229Cu;
        goto label_31229c;
    }
    ctx->pc = 0x312294u;
    {
        const bool branch_taken_0x312294 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x312298u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x312294u;
        // 0x312298: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x312294) {
            ctx->pc = 0x3122A4u;
            goto label_3122a4;
        }
    }
    ctx->pc = 0x31229Cu;
label_31229c:
    // 0x31229c: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
label_3122a0:
    if (ctx->pc == 0x3122A0u) {
        ctx->pc = 0x3122A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31229Cu;
        // 0x3122a0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3122A4u;
        goto label_3122a4;
    }
    ctx->pc = 0x31229Cu;
    {
        const bool branch_taken_0x31229c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3122A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31229Cu;
        // 0x3122a0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31229c) {
            ctx->pc = 0x312288u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_312288;
        }
    }
    ctx->pc = 0x3122A4u;
label_3122a4:
    // 0x3122a4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3122a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3122a8:
    // 0x3122a8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3122a8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_3122ac:
    // 0x3122ac: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x3122acu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_3122b0:
    // 0x3122b0: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x3122b0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_3122b4:
    // 0x3122b4: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x3122b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_3122b8:
    // 0x3122b8: 0x3e00008  jr          $ra
label_3122bc:
    if (ctx->pc == 0x3122BCu) {
        ctx->pc = 0x3122BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3122B8u;
        // 0x3122bc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3122C0u;
        goto label_3122c0;
    }
    ctx->pc = 0x3122B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3122BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3122B8u;
        // 0x3122bc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3122B8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3122C0u;
label_3122c0:
    // 0x3122c0: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x3122c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_3122c4:
    // 0x3122c4: 0x0  nop
    ctx->pc = 0x3122c4u;
    // NOP
label_3122c8:
    // 0x3122c8: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x3122c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_3122cc:
    // 0x3122cc: 0x0  nop
    ctx->pc = 0x3122ccu;
    // NOP
label_3122d0:
    // 0x3122d0: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x3122d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_3122d4:
    // 0x3122d4: 0x0  nop
    ctx->pc = 0x3122d4u;
    // NOP
    ctx->pc = 0x3122d8u;
}
