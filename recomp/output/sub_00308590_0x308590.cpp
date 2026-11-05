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

// Function: sub_00308590
// Address: 0x308590 - 0x308608
void sub_00308590_0x308590(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00308590_0x308590");
#endif

    switch (ctx->pc) {
        case 0x308590u: goto label_308590;
        case 0x308594u: goto label_308594;
        case 0x308598u: goto label_308598;
        case 0x30859cu: goto label_30859c;
        case 0x3085a0u: goto label_3085a0;
        case 0x3085a4u: goto label_3085a4;
        case 0x3085a8u: goto label_3085a8;
        case 0x3085acu: goto label_3085ac;
        case 0x3085b0u: goto label_3085b0;
        case 0x3085b4u: goto label_3085b4;
        case 0x3085b8u: goto label_3085b8;
        case 0x3085bcu: goto label_3085bc;
        case 0x3085c0u: goto label_3085c0;
        case 0x3085c4u: goto label_3085c4;
        case 0x3085c8u: goto label_3085c8;
        case 0x3085ccu: goto label_3085cc;
        case 0x3085d0u: goto label_3085d0;
        case 0x3085d4u: goto label_3085d4;
        case 0x3085d8u: goto label_3085d8;
        case 0x3085dcu: goto label_3085dc;
        case 0x3085e0u: goto label_3085e0;
        case 0x3085e4u: goto label_3085e4;
        case 0x3085e8u: goto label_3085e8;
        case 0x3085ecu: goto label_3085ec;
        case 0x3085f0u: goto label_3085f0;
        case 0x3085f4u: goto label_3085f4;
        case 0x3085f8u: goto label_3085f8;
        case 0x3085fcu: goto label_3085fc;
        case 0x308600u: goto label_308600;
        case 0x308604u: goto label_308604;
        default: break;
    }

    ctx->pc = 0x308590u;

label_308590:
    // 0x308590: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x308590u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_308594:
    // 0x308594: 0x3c020043  lui         $v0, 0x43
    ctx->pc = 0x308594u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)67 << 16));
label_308598:
    // 0x308598: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x308598u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_30859c:
    // 0x30859c: 0x24424318  addiu       $v0, $v0, 0x4318
    ctx->pc = 0x30859cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 17176));
label_3085a0:
    // 0x3085a0: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x3085a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_3085a4:
    // 0x3085a4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3085a4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3085a8:
    // 0x3085a8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3085a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_3085ac:
    // 0x3085ac: 0xae020218  sw          $v0, 0x218($s0)
    ctx->pc = 0x3085acu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 536), GPR_U32(ctx, 2));
label_3085b0:
    // 0x3085b0: 0x8e0402e4  lw          $a0, 0x2E4($s0)
    ctx->pc = 0x3085b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 740)));
label_3085b4:
    // 0x3085b4: 0x1080000c  beqz        $a0, . + 4 + (0xC << 2)
label_3085b8:
    if (ctx->pc == 0x3085B8u) {
        ctx->pc = 0x3085B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3085B4u;
        // 0x3085b8: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3085BCu;
        goto label_3085bc;
    }
    ctx->pc = 0x3085B4u;
    {
        const bool branch_taken_0x3085b4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x3085B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3085B4u;
        // 0x3085b8: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3085b4) {
            ctx->pc = 0x3085E8u;
            goto label_3085e8;
        }
    }
    ctx->pc = 0x3085BCu;
label_3085bc:
    // 0x3085bc: 0x8c830068  lw          $v1, 0x68($a0)
    ctx->pc = 0x3085bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 104)));
label_3085c0:
    // 0x3085c0: 0x8c620010  lw          $v0, 0x10($v1)
    ctx->pc = 0x3085c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
label_3085c4:
    // 0x3085c4: 0x40f809  jalr        $v0
label_3085c8:
    if (ctx->pc == 0x3085C8u) {
        ctx->pc = 0x3085CCu;
        goto label_3085cc;
    }
    ctx->pc = 0x3085C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3085CCu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3085C4u, 0x3085CCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3085CCu;
label_3085cc:
    // 0x3085cc: 0x8e0402e4  lw          $a0, 0x2E4($s0)
    ctx->pc = 0x3085ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 740)));
label_3085d0:
    // 0x3085d0: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_3085d4:
    if (ctx->pc == 0x3085D4u) {
        ctx->pc = 0x3085D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3085D0u;
        // 0x3085d4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3085D8u;
        goto label_3085d8;
    }
    ctx->pc = 0x3085D0u;
    {
        const bool branch_taken_0x3085d0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x3085d0) {
            ctx->pc = 0x3085D4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3085D0u;
            // 0x3085d4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3085ECu;
            goto label_3085ec;
        }
    }
    ctx->pc = 0x3085D8u;
label_3085d8:
    // 0x3085d8: 0x8c830068  lw          $v1, 0x68($a0)
    ctx->pc = 0x3085d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 104)));
label_3085dc:
    // 0x3085dc: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x3085dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_3085e0:
    // 0x3085e0: 0x40f809  jalr        $v0
label_3085e4:
    if (ctx->pc == 0x3085E4u) {
        ctx->pc = 0x3085E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3085E0u;
        // 0x3085e4: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3085E8u;
        goto label_3085e8;
    }
    ctx->pc = 0x3085E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3085E8u);
        ctx->pc = 0x3085E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3085E0u;
        // 0x3085e4: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3085E0u, 0x3085E8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3085E8u;
label_3085e8:
    // 0x3085e8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3085e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3085ec:
    // 0x3085ec: 0xc09868a  jal         func_261A28
label_3085f0:
    if (ctx->pc == 0x3085F0u) {
        ctx->pc = 0x3085F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3085ECu;
        // 0x3085f0: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3085F4u;
        goto label_3085f4;
    }
    ctx->pc = 0x3085ECu;
    SET_GPR_U32(ctx, 31, 0x3085F4u);
    ctx->pc = 0x3085F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3085ECu;
    // 0x3085f0: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x261A28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x261A28u, 0x3085ECu, 0x3085F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3085F4u;
label_3085f4:
    // 0x3085f4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3085f4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_3085f8:
    // 0x3085f8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x3085f8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_3085fc:
    // 0x3085fc: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3085fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_308600:
    // 0x308600: 0x3e00008  jr          $ra
label_308604:
    if (ctx->pc == 0x308604u) {
        ctx->pc = 0x308604u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x308600u;
        // 0x308604: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x308608u;
        goto label_fallthrough_0x308600;
    }
    ctx->pc = 0x308600u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x308604u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x308600u;
        // 0x308604: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x308600u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x308600:
    ctx->pc = 0x308608u;
}
