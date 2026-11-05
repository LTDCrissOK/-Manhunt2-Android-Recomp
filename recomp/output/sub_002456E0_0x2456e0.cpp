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

// Function: sub_002456E0
// Address: 0x2456e0 - 0x245750
void sub_002456E0_0x2456e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002456E0_0x2456e0");
#endif

    switch (ctx->pc) {
        case 0x2456e0u: goto label_2456e0;
        case 0x2456e4u: goto label_2456e4;
        case 0x2456e8u: goto label_2456e8;
        case 0x2456ecu: goto label_2456ec;
        case 0x2456f0u: goto label_2456f0;
        case 0x2456f4u: goto label_2456f4;
        case 0x2456f8u: goto label_2456f8;
        case 0x2456fcu: goto label_2456fc;
        case 0x245700u: goto label_245700;
        case 0x245704u: goto label_245704;
        case 0x245708u: goto label_245708;
        case 0x24570cu: goto label_24570c;
        case 0x245710u: goto label_245710;
        case 0x245714u: goto label_245714;
        case 0x245718u: goto label_245718;
        case 0x24571cu: goto label_24571c;
        case 0x245720u: goto label_245720;
        case 0x245724u: goto label_245724;
        case 0x245728u: goto label_245728;
        case 0x24572cu: goto label_24572c;
        case 0x245730u: goto label_245730;
        case 0x245734u: goto label_245734;
        case 0x245738u: goto label_245738;
        case 0x24573cu: goto label_24573c;
        case 0x245740u: goto label_245740;
        case 0x245744u: goto label_245744;
        case 0x245748u: goto label_245748;
        case 0x24574cu: goto label_24574c;
        default: break;
    }

    ctx->pc = 0x2456e0u;

label_2456e0:
    // 0x2456e0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2456e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_2456e4:
    // 0x2456e4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2456e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_2456e8:
    // 0x2456e8: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x2456e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
label_2456ec:
    // 0x2456ec: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x2456ecu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2456f0:
    // 0x2456f0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2456f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2456f4:
    // 0x2456f4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2456f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2456f8:
    // 0x2456f8: 0xc60006e4  lwc1        $f0, 0x6E4($s0)
    ctx->pc = 0x2456f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1764)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2456fc:
    // 0x2456fc: 0xc60c06ec  lwc1        $f12, 0x6EC($s0)
    ctx->pc = 0x2456fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1772)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_245700:
    // 0x245700: 0x8e030218  lw          $v1, 0x218($s0)
    ctx->pc = 0x245700u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 536)));
label_245704:
    // 0x245704: 0x8c6201c8  lw          $v0, 0x1C8($v1)
    ctx->pc = 0x245704u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 456)));
label_245708:
    // 0x245708: 0x40f809  jalr        $v0
label_24570c:
    if (ctx->pc == 0x24570Cu) {
        ctx->pc = 0x24570Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x245708u;
        // 0x24570c: 0x460c0300  add.s       $f12, $f0, $f12 (Delay Slot)
        ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[12]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x245710u;
        goto label_245710;
    }
    ctx->pc = 0x245708u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x245710u);
        ctx->pc = 0x24570Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x245708u;
        // 0x24570c: 0x460c0300  add.s       $f12, $f0, $f12 (Delay Slot)
        ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[12]);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x245708u, 0x245710u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x245710u;
label_245710:
    // 0x245710: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x245710u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_245714:
    // 0x245714: 0x24054000  addiu       $a1, $zero, 0x4000
    ctx->pc = 0x245714u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16384));
label_245718:
    // 0x245718: 0xc08fed2  jal         func_23FB48
label_24571c:
    if (ctx->pc == 0x24571Cu) {
        ctx->pc = 0x24571Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x245718u;
        // 0x24571c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x245720u;
        goto label_245720;
    }
    ctx->pc = 0x245718u;
    SET_GPR_U32(ctx, 31, 0x245720u);
    ctx->pc = 0x24571Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x245718u;
    // 0x24571c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23FB48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23FB48u, 0x245718u, 0x245720u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x245720u;
label_245720:
    // 0x245720: 0x8e040334  lw          $a0, 0x334($s0)
    ctx->pc = 0x245720u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 820)));
label_245724:
    // 0x245724: 0x24030048  addiu       $v1, $zero, 0x48
    ctx->pc = 0x245724u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
label_245728:
    // 0x245728: 0x8c820150  lw          $v0, 0x150($a0)
    ctx->pc = 0x245728u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 336)));
label_24572c:
    // 0x24572c: 0x14430005  bne         $v0, $v1, . + 4 + (0x5 << 2)
label_245730:
    if (ctx->pc == 0x245730u) {
        ctx->pc = 0x245730u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24572Cu;
        // 0x245730: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x245734u;
        goto label_245734;
    }
    ctx->pc = 0x24572Cu;
    {
        const bool branch_taken_0x24572c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x245730u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24572Cu;
        // 0x245730: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24572c) {
            ctx->pc = 0x245744u;
            goto label_245744;
        }
    }
    ctx->pc = 0x245734u;
label_245734:
    // 0x245734: 0x24050046  addiu       $a1, $zero, 0x46
    ctx->pc = 0x245734u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 70));
label_245738:
    // 0x245738: 0xc069712  jal         func_1A5C48
label_24573c:
    if (ctx->pc == 0x24573Cu) {
        ctx->pc = 0x24573Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x245738u;
        // 0x24573c: 0x2406080d  addiu       $a2, $zero, 0x80D (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2061));
        ctx->in_delay_slot = false;
        ctx->pc = 0x245740u;
        goto label_245740;
    }
    ctx->pc = 0x245738u;
    SET_GPR_U32(ctx, 31, 0x245740u);
    ctx->pc = 0x24573Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x245738u;
    // 0x24573c: 0x2406080d  addiu       $a2, $zero, 0x80D (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2061));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A5C48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A5C48u, 0x245738u, 0x245740u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x245740u;
label_245740:
    // 0x245740: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x245740u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_245744:
    // 0x245744: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x245744u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_245748:
    // 0x245748: 0x3e00008  jr          $ra
label_24574c:
    if (ctx->pc == 0x24574Cu) {
        ctx->pc = 0x24574Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x245748u;
        // 0x24574c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x245750u;
        goto label_fallthrough_0x245748;
    }
    ctx->pc = 0x245748u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x24574Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x245748u;
        // 0x24574c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x245748u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x245748:
    ctx->pc = 0x245750u;
}
