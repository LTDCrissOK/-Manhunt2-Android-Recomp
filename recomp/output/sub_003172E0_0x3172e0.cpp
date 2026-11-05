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

// Function: sub_003172E0
// Address: 0x3172e0 - 0x317398
void sub_003172E0_0x3172e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003172E0_0x3172e0");
#endif

    switch (ctx->pc) {
        case 0x317308u: goto label_317308;
        case 0x317310u: goto label_317310;
        case 0x31731cu: goto label_31731c;
        case 0x317324u: goto label_317324;
        case 0x317330u: goto label_317330;
        case 0x317338u: goto label_317338;
        case 0x317340u: goto label_317340;
        case 0x31734cu: goto label_31734c;
        case 0x317368u: goto label_317368;
        case 0x317370u: goto label_317370;
        case 0x317378u: goto label_317378;
        default: break;
    }

    ctx->pc = 0x3172e0u;

    // 0x3172e0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3172e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3172e4: 0x240400b0  addiu       $a0, $zero, 0xB0
    ctx->pc = 0x3172e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 176));
    // 0x3172e8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3172e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x3172ec: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x3172ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x3172f0: 0x3c100040  lui         $s0, 0x40
    ctx->pc = 0x3172f0u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)64 << 16));
    // 0x3172f4: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x3172f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x3172f8: 0x3c110040  lui         $s1, 0x40
    ctx->pc = 0x3172f8u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)64 << 16));
    // 0x3172fc: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x3172fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x317300: 0xc0f5240  jal         func_3D4900
    ctx->pc = 0x317300u;
    SET_GPR_U32(ctx, 31, 0x317308u);
    ctx->pc = 0x317304u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x317300u;
    // 0x317304: 0x3c120040  lui         $s2, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)64 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4900u, 0x317300u, 0x317308u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x317308u;
label_317308:
    // 0x317308: 0xc0b4d52  jal         func_2D3548
    ctx->pc = 0x317308u;
    SET_GPR_U32(ctx, 31, 0x317310u);
    ctx->pc = 0x31730Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x317308u;
    // 0x31730c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D3548u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D3548u, 0x317308u, 0x317310u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x317310u;
label_317310:
    // 0x317310: 0x24040af4  addiu       $a0, $zero, 0xAF4
    ctx->pc = 0x317310u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2804));
    // 0x317314: 0xc0f5240  jal         func_3D4900
    ctx->pc = 0x317314u;
    SET_GPR_U32(ctx, 31, 0x31731Cu);
    ctx->pc = 0x317318u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x317314u;
    // 0x317318: 0xae42bd2c  sw          $v0, -0x42D4($s2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 18), 4294950188), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4900u, 0x317314u, 0x31731Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31731Cu;
label_31731c:
    // 0x31731c: 0xc0b5a9c  jal         func_2D6A70
    ctx->pc = 0x31731Cu;
    SET_GPR_U32(ctx, 31, 0x317324u);
    ctx->pc = 0x317320u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31731Cu;
    // 0x317320: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D6A70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D6A70u, 0x31731Cu, 0x317324u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x317324u;
label_317324:
    // 0x317324: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x317324u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x317328: 0xc0b5ba4  jal         func_2D6E90
    ctx->pc = 0x317328u;
    SET_GPR_U32(ctx, 31, 0x317330u);
    ctx->pc = 0x31732Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x317328u;
    // 0x31732c: 0xae02bd30  sw          $v0, -0x42D0($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 4294950192), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D6E90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D6E90u, 0x317328u, 0x317330u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x317330u;
label_317330:
    // 0x317330: 0xc0f5240  jal         func_3D4900
    ctx->pc = 0x317330u;
    SET_GPR_U32(ctx, 31, 0x317338u);
    ctx->pc = 0x317334u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x317330u;
    // 0x317334: 0x2404003c  addiu       $a0, $zero, 0x3C (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4900u, 0x317330u, 0x317338u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x317338u;
label_317338:
    // 0x317338: 0xc0b5386  jal         func_2D4E18
    ctx->pc = 0x317338u;
    SET_GPR_U32(ctx, 31, 0x317340u);
    ctx->pc = 0x31733Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x317338u;
    // 0x31733c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D4E18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D4E18u, 0x317338u, 0x317340u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x317340u;
label_317340:
    // 0x317340: 0xae22bd20  sw          $v0, -0x42E0($s1)
    ctx->pc = 0x317340u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4294950176), GPR_U32(ctx, 2));
    // 0x317344: 0xc0b53f2  jal         func_2D4FC8
    ctx->pc = 0x317344u;
    SET_GPR_U32(ctx, 31, 0x31734Cu);
    ctx->pc = 0x317348u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x317344u;
    // 0x317348: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D4FC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D4FC8u, 0x317344u, 0x31734Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31734Cu;
label_31734c:
    // 0x31734c: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x31734cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
    // 0x317350: 0xa062bd24  sb          $v0, -0x42DC($v1)
    ctx->pc = 0x317350u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x3FBD24u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x3FBD24u, _value); } while (0);
    // 0x317354: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x317354u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x317358: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x317358u;
    {
        const bool branch_taken_0x317358 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x317358) {
            ctx->pc = 0x317370u;
            goto label_317370;
        }
    }
    ctx->pc = 0x317360u;
    // 0x317360: 0xc0b4dca  jal         func_2D3728
    ctx->pc = 0x317360u;
    SET_GPR_U32(ctx, 31, 0x317368u);
    ctx->pc = 0x317364u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x317360u;
    // 0x317364: 0x8e44bd2c  lw          $a0, -0x42D4($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294950188)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D3728u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D3728u, 0x317360u, 0x317368u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x317368u;
label_317368:
    // 0x317368: 0xc0c881e  jal         func_322078
    ctx->pc = 0x317368u;
    SET_GPR_U32(ctx, 31, 0x317370u);
    ctx->pc = 0x31736Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x317368u;
    // 0x31736c: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x322078u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x322078u, 0x317368u, 0x317370u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x317370u;
label_317370:
    // 0x317370: 0xc0c6682  jal         func_319A08
    ctx->pc = 0x317370u;
    SET_GPR_U32(ctx, 31, 0x317378u);
    ctx->pc = 0x319A08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x319A08u, 0x317370u, 0x317378u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x317378u;
label_317378:
    // 0x317378: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x317378u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x31737c: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x31737cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x317380: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x317380u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x317384: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x317384u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x317388: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x317388u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x31738c: 0x3e00008  jr          $ra
    ctx->pc = 0x31738Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x317390u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31738Cu;
        // 0x317390: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x31738Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x317394u;
    // 0x317394: 0x0  nop
    ctx->pc = 0x317394u;
    // NOP
    ctx->pc = 0x317398u;
}
