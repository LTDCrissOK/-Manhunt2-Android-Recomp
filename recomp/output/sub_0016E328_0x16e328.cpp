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

// Function: sub_0016E328
// Address: 0x16e328 - 0x16e3b0
void sub_0016E328_0x16e328(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0016E328_0x16e328");
#endif

    switch (ctx->pc) {
        case 0x16e328u: goto label_16e328;
        case 0x16e32cu: goto label_16e32c;
        case 0x16e330u: goto label_16e330;
        case 0x16e334u: goto label_16e334;
        case 0x16e338u: goto label_16e338;
        case 0x16e33cu: goto label_16e33c;
        case 0x16e340u: goto label_16e340;
        case 0x16e344u: goto label_16e344;
        case 0x16e348u: goto label_16e348;
        case 0x16e34cu: goto label_16e34c;
        case 0x16e350u: goto label_16e350;
        case 0x16e354u: goto label_16e354;
        case 0x16e358u: goto label_16e358;
        case 0x16e35cu: goto label_16e35c;
        case 0x16e360u: goto label_16e360;
        case 0x16e364u: goto label_16e364;
        case 0x16e368u: goto label_16e368;
        case 0x16e36cu: goto label_16e36c;
        case 0x16e370u: goto label_16e370;
        case 0x16e374u: goto label_16e374;
        case 0x16e378u: goto label_16e378;
        case 0x16e37cu: goto label_16e37c;
        case 0x16e380u: goto label_16e380;
        case 0x16e384u: goto label_16e384;
        case 0x16e388u: goto label_16e388;
        case 0x16e38cu: goto label_16e38c;
        case 0x16e390u: goto label_16e390;
        case 0x16e394u: goto label_16e394;
        case 0x16e398u: goto label_16e398;
        case 0x16e39cu: goto label_16e39c;
        case 0x16e3a0u: goto label_16e3a0;
        case 0x16e3a4u: goto label_16e3a4;
        case 0x16e3a8u: goto label_16e3a8;
        case 0x16e3acu: goto label_16e3ac;
        default: break;
    }

    ctx->pc = 0x16e328u;

label_16e328:
    // 0x16e328: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x16e328u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_16e32c:
    // 0x16e32c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x16e32cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_16e330:
    // 0x16e330: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x16e330u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_16e334:
    // 0x16e334: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x16e334u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_16e338:
    // 0x16e338: 0xc04f9b8  jal         func_13E6E0
label_16e33c:
    if (ctx->pc == 0x16E33Cu) {
        ctx->pc = 0x16E33Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16E338u;
        // 0x16e33c: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16E340u;
        goto label_16e340;
    }
    ctx->pc = 0x16E338u;
    SET_GPR_U32(ctx, 31, 0x16E340u);
    ctx->pc = 0x16E33Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16E338u;
    // 0x16e33c: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13E6E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13E6E0u, 0x16E338u, 0x16E340u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16E340u;
label_16e340:
    // 0x16e340: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x16e340u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_16e344:
    // 0x16e344: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x16e344u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_16e348:
    // 0x16e348: 0xae0300f4  sw          $v1, 0xF4($s0)
    ctx->pc = 0x16e348u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 244), GPR_U32(ctx, 3));
label_16e34c:
    // 0x16e34c: 0x24050016  addiu       $a1, $zero, 0x16
    ctx->pc = 0x16e34cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
label_16e350:
    // 0x16e350: 0xc04f8fc  jal         func_13E3F0
label_16e354:
    if (ctx->pc == 0x16E354u) {
        ctx->pc = 0x16E354u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16E350u;
        // 0x16e354: 0xae0200f0  sw          $v0, 0xF0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 240), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16E358u;
        goto label_16e358;
    }
    ctx->pc = 0x16E350u;
    SET_GPR_U32(ctx, 31, 0x16E358u);
    ctx->pc = 0x16E354u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16E350u;
    // 0x16e354: 0xae0200f0  sw          $v0, 0xF0($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 240), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13E3F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13E3F0u, 0x16E350u, 0x16E358u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16E358u;
label_16e358:
    // 0x16e358: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x16e358u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_16e35c:
    // 0x16e35c: 0x8e0500fc  lw          $a1, 0xFC($s0)
    ctx->pc = 0x16e35cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 252)));
label_16e360:
    // 0x16e360: 0xc0461e8  jal         func_1187A0
label_16e364:
    if (ctx->pc == 0x16E364u) {
        ctx->pc = 0x16E364u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16E360u;
        // 0x16e364: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16E368u;
        goto label_16e368;
    }
    ctx->pc = 0x16E360u;
    SET_GPR_U32(ctx, 31, 0x16E368u);
    ctx->pc = 0x16E364u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16E360u;
    // 0x16e364: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1187A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1187A0u, 0x16E360u, 0x16E368u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16E368u;
label_16e368:
    // 0x16e368: 0x3c014000  lui         $at, 0x4000
    ctx->pc = 0x16e368u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16384 << 16));
label_16e36c:
    // 0x16e36c: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x16e36cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_16e370:
    // 0x16e370: 0xc046290  jal         func_118A40
label_16e374:
    if (ctx->pc == 0x16E374u) {
        ctx->pc = 0x16E374u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16E370u;
        // 0x16e374: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16E378u;
        goto label_16e378;
    }
    ctx->pc = 0x16E370u;
    SET_GPR_U32(ctx, 31, 0x16E378u);
    ctx->pc = 0x16E374u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16E370u;
    // 0x16e374: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118A40u, 0x16E370u, 0x16E378u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16E378u;
label_16e378:
    // 0x16e378: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x16e378u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_16e37c:
    // 0x16e37c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x16e37cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_16e380:
    // 0x16e380: 0xae220054  sw          $v0, 0x54($s1)
    ctx->pc = 0x16e380u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 84), GPR_U32(ctx, 2));
label_16e384:
    // 0x16e384: 0x8e0400f0  lw          $a0, 0xF0($s0)
    ctx->pc = 0x16e384u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 240)));
label_16e388:
    // 0x16e388: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x16e388u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_16e38c:
    // 0x16e38c: 0x8c620028  lw          $v0, 0x28($v1)
    ctx->pc = 0x16e38cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 40)));
label_16e390:
    // 0x16e390: 0x40f809  jalr        $v0
label_16e394:
    if (ctx->pc == 0x16E394u) {
        ctx->pc = 0x16E394u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16E390u;
        // 0x16e394: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16E398u;
        goto label_16e398;
    }
    ctx->pc = 0x16E390u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x16E398u);
        ctx->pc = 0x16E394u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16E390u;
        // 0x16e394: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16E390u, 0x16E398u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x16E398u;
label_16e398:
    // 0x16e398: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x16e398u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_16e39c:
    // 0x16e39c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x16e39cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_16e3a0:
    // 0x16e3a0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x16e3a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_16e3a4:
    // 0x16e3a4: 0x3e00008  jr          $ra
label_16e3a8:
    if (ctx->pc == 0x16E3A8u) {
        ctx->pc = 0x16E3A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16E3A4u;
        // 0x16e3a8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16E3ACu;
        goto label_16e3ac;
    }
    ctx->pc = 0x16E3A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16E3A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16E3A4u;
        // 0x16e3a8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16E3A4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x16E3ACu;
label_16e3ac:
    // 0x16e3ac: 0x0  nop
    ctx->pc = 0x16e3acu;
    // NOP
    ctx->pc = 0x16e3b0u;
}
