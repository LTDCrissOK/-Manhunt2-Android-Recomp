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

// Function: sub_00253398
// Address: 0x253398 - 0x253530
void sub_00253398_0x253398(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00253398_0x253398");
#endif

    switch (ctx->pc) {
        case 0x2533d8u: goto label_2533d8;
        case 0x2533e8u: goto label_2533e8;
        case 0x25340cu: goto label_25340c;
        case 0x2534ccu: goto label_2534cc;
        case 0x2534e0u: goto label_2534e0;
        case 0x2534f8u: goto label_2534f8;
        case 0x25350cu: goto label_25350c;
        case 0x253518u: goto label_253518;
        default: break;
    }

    ctx->pc = 0x253398u;

    // 0x253398: 0x46006305  abs.s       $f12, $f12
    ctx->pc = 0x253398u;
    ctx->f[12] = FPU_ABS_S(ctx->f[12]);
    // 0x25339c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x25339cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2533a0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2533a0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2533a4: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2533a4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2533a8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2533a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2533ac: 0x460c0034  c.lt.s      $f0, $f12
    ctx->pc = 0x2533acu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[12])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2533b0: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2533b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2533b4: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x2533b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x2533b8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2533b8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2533bc: 0x45010056  bc1t        . + 4 + (0x56 << 2)
    ctx->pc = 0x2533BCu;
    {
        const bool branch_taken_0x2533bc = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x2533C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2533BCu;
        // 0x2533c0: 0xffbf0018  sd          $ra, 0x18($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2533bc) {
            ctx->pc = 0x253518u;
            goto label_253518;
        }
    }
    ctx->pc = 0x2533C4u;
    // 0x2533c4: 0x9202047d  lbu         $v0, 0x47D($s0)
    ctx->pc = 0x2533c4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1149)));
    // 0x2533c8: 0x54400054  bnel        $v0, $zero, . + 4 + (0x54 << 2)
    ctx->pc = 0x2533C8u;
    {
        const bool branch_taken_0x2533c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2533c8) {
            ctx->pc = 0x2533CCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2533C8u;
            // 0x2533cc: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x25351Cu;
            goto label_25351c;
        }
    }
    ctx->pc = 0x2533D0u;
    // 0x2533d0: 0xc0954f6  jal         func_2553D8
    ctx->pc = 0x2533D0u;
    SET_GPR_U32(ctx, 31, 0x2533D8u);
    ctx->pc = 0x2553D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2553D8u, 0x2533D0u, 0x2533D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2533D8u;
label_2533d8:
    // 0x2533d8: 0x54400050  bnel        $v0, $zero, . + 4 + (0x50 << 2)
    ctx->pc = 0x2533D8u;
    {
        const bool branch_taken_0x2533d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2533d8) {
            ctx->pc = 0x2533DCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2533D8u;
            // 0x2533dc: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x25351Cu;
            goto label_25351c;
        }
    }
    ctx->pc = 0x2533E0u;
    // 0x2533e0: 0xc0954d2  jal         func_255348
    ctx->pc = 0x2533E0u;
    SET_GPR_U32(ctx, 31, 0x2533E8u);
    ctx->pc = 0x2533E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2533E0u;
    // 0x2533e4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x255348u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x255348u, 0x2533E0u, 0x2533E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2533E8u;
label_2533e8:
    // 0x2533e8: 0x5440004c  bnel        $v0, $zero, . + 4 + (0x4C << 2)
    ctx->pc = 0x2533E8u;
    {
        const bool branch_taken_0x2533e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2533e8) {
            ctx->pc = 0x2533ECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2533E8u;
            // 0x2533ec: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x25351Cu;
            goto label_25351c;
        }
    }
    ctx->pc = 0x2533F0u;
    // 0x2533f0: 0x8e021004  lw          $v0, 0x1004($s0)
    ctx->pc = 0x2533f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4100)));
    // 0x2533f4: 0x54400049  bnel        $v0, $zero, . + 4 + (0x49 << 2)
    ctx->pc = 0x2533F4u;
    {
        const bool branch_taken_0x2533f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2533f4) {
            ctx->pc = 0x2533F8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2533F4u;
            // 0x2533f8: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x25351Cu;
            goto label_25351c;
        }
    }
    ctx->pc = 0x2533FCu;
    // 0x2533fc: 0x8e110ff0  lw          $s1, 0xFF0($s0)
    ctx->pc = 0x2533fcu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4080)));
    // 0x253400: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x253400u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x253404: 0xc06e0f0  jal         func_1B83C0
    ctx->pc = 0x253404u;
    SET_GPR_U32(ctx, 31, 0x25340Cu);
    ctx->pc = 0x253408u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x253404u;
    // 0x253408: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B83C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B83C0u, 0x253404u, 0x25340Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25340Cu;
label_25340c:
    // 0x25340c: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x25340Cu;
    {
        const bool branch_taken_0x25340c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x25340c) {
            ctx->pc = 0x25341Cu;
            goto label_25341c;
        }
    }
    ctx->pc = 0x253414u;
    // 0x253414: 0x8e220220  lw          $v0, 0x220($s1)
    ctx->pc = 0x253414u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 544)));
    // 0x253418: 0x2902b  sltu        $s2, $zero, $v0
    ctx->pc = 0x253418u;
    SET_GPR_U64(ctx, 18, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_25341c:
    // 0x25341c: 0x5640003f  bnel        $s2, $zero, . + 4 + (0x3F << 2)
    ctx->pc = 0x25341Cu;
    {
        const bool branch_taken_0x25341c = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        if (branch_taken_0x25341c) {
            ctx->pc = 0x253420u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x25341Cu;
            // 0x253420: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x25351Cu;
            goto label_25351c;
        }
    }
    ctx->pc = 0x253424u;
    // 0x253424: 0xc60104f0  lwc1        $f1, 0x4F0($s0)
    ctx->pc = 0x253424u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1264)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x253428: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x253428u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x25342c: 0x0  nop
    ctx->pc = 0x25342cu;
    // NOP
    // 0x253430: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x253430u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x253434: 0x0  nop
    ctx->pc = 0x253434u;
    // NOP
    // 0x253438: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x253438u;
    {
        const bool branch_taken_0x253438 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x25343Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x253438u;
        // 0x25343c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x253438) {
            ctx->pc = 0x253444u;
            goto label_253444;
        }
    }
    ctx->pc = 0x253440u;
    // 0x253440: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x253440u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_253444:
    // 0x253444: 0x54400035  bnel        $v0, $zero, . + 4 + (0x35 << 2)
    ctx->pc = 0x253444u;
    {
        const bool branch_taken_0x253444 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x253444) {
            ctx->pc = 0x253448u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x253444u;
            // 0x253448: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x25351Cu;
            goto label_25351c;
        }
    }
    ctx->pc = 0x25344Cu;
    // 0x25344c: 0x8e020ff0  lw          $v0, 0xFF0($s0)
    ctx->pc = 0x25344cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4080)));
    // 0x253450: 0x8c4300b0  lw          $v1, 0xB0($v0)
    ctx->pc = 0x253450u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 176)));
    // 0x253454: 0x3100a  movz        $v0, $zero, $v1
    ctx->pc = 0x253454u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 0));
    // 0x253458: 0x54400030  bnel        $v0, $zero, . + 4 + (0x30 << 2)
    ctx->pc = 0x253458u;
    {
        const bool branch_taken_0x253458 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x253458) {
            ctx->pc = 0x25345Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x253458u;
            // 0x25345c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x25351Cu;
            goto label_25351c;
        }
    }
    ctx->pc = 0x253460u;
    // 0x253460: 0x8e030334  lw          $v1, 0x334($s0)
    ctx->pc = 0x253460u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 820)));
    // 0x253464: 0x8c630150  lw          $v1, 0x150($v1)
    ctx->pc = 0x253464u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 336)));
    // 0x253468: 0x2c620002  sltiu       $v0, $v1, 0x2
    ctx->pc = 0x253468u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x25346c: 0x1440000c  bnez        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x25346Cu;
    {
        const bool branch_taken_0x25346c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x253470u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25346Cu;
        // 0x253470: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25346c) {
            ctx->pc = 0x2534A0u;
            goto label_2534a0;
        }
    }
    ctx->pc = 0x253474u;
    // 0x253474: 0x2402001c  addiu       $v0, $zero, 0x1C
    ctx->pc = 0x253474u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    // 0x253478: 0x10620009  beq         $v1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x253478u;
    {
        const bool branch_taken_0x253478 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x25347Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x253478u;
        // 0x25347c: 0x2402001b  addiu       $v0, $zero, 0x1B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 27));
        ctx->in_delay_slot = false;
        if (branch_taken_0x253478) {
            ctx->pc = 0x2534A0u;
            goto label_2534a0;
        }
    }
    ctx->pc = 0x253480u;
    // 0x253480: 0x10620007  beq         $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x253480u;
    {
        const bool branch_taken_0x253480 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x253484u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x253480u;
        // 0x253484: 0x24020046  addiu       $v0, $zero, 0x46 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 70));
        ctx->in_delay_slot = false;
        if (branch_taken_0x253480) {
            ctx->pc = 0x2534A0u;
            goto label_2534a0;
        }
    }
    ctx->pc = 0x253488u;
    // 0x253488: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x253488u;
    {
        const bool branch_taken_0x253488 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x25348Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x253488u;
        // 0x25348c: 0x24020032  addiu       $v0, $zero, 0x32 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
        ctx->in_delay_slot = false;
        if (branch_taken_0x253488) {
            ctx->pc = 0x2534A0u;
            goto label_2534a0;
        }
    }
    ctx->pc = 0x253490u;
    // 0x253490: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x253490u;
    {
        const bool branch_taken_0x253490 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x253494u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x253490u;
        // 0x253494: 0x24020033  addiu       $v0, $zero, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 51));
        ctx->in_delay_slot = false;
        if (branch_taken_0x253490) {
            ctx->pc = 0x2534A0u;
            goto label_2534a0;
        }
    }
    ctx->pc = 0x253498u;
    // 0x253498: 0x14620002  bne         $v1, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x253498u;
    {
        const bool branch_taken_0x253498 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x253498) {
            ctx->pc = 0x2534A4u;
            goto label_2534a4;
        }
    }
    ctx->pc = 0x2534A0u;
label_2534a0:
    // 0x2534a0: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2534a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2534a4:
    // 0x2534a4: 0x14800007  bnez        $a0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2534A4u;
    {
        const bool branch_taken_0x2534a4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x2534a4) {
            ctx->pc = 0x2534C4u;
            goto label_2534c4;
        }
    }
    ctx->pc = 0x2534ACu;
    // 0x2534ac: 0x8e030334  lw          $v1, 0x334($s0)
    ctx->pc = 0x2534acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 820)));
    // 0x2534b0: 0x8c620150  lw          $v0, 0x150($v1)
    ctx->pc = 0x2534b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 336)));
    // 0x2534b4: 0x2442fff7  addiu       $v0, $v0, -0x9
    ctx->pc = 0x2534b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967287));
    // 0x2534b8: 0x2c420004  sltiu       $v0, $v0, 0x4
    ctx->pc = 0x2534b8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
    // 0x2534bc: 0x50400014  beql        $v0, $zero, . + 4 + (0x14 << 2)
    ctx->pc = 0x2534BCu;
    {
        const bool branch_taken_0x2534bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2534bc) {
            ctx->pc = 0x2534C0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2534BCu;
            // 0x2534c0: 0x8e040334  lw          $a0, 0x334($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 820)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x253510u;
            goto label_253510;
        }
    }
    ctx->pc = 0x2534C4u;
label_2534c4:
    // 0x2534c4: 0xc0619d2  jal         func_186748
    ctx->pc = 0x2534C4u;
    SET_GPR_U32(ctx, 31, 0x2534CCu);
    ctx->pc = 0x2534C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2534C4u;
    // 0x2534c8: 0x8e040ff4  lw          $a0, 0xFF4($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4084)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186748u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186748u, 0x2534C4u, 0x2534CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2534CCu;
label_2534cc:
    // 0x2534cc: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x2534CCu;
    {
        const bool branch_taken_0x2534cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2534cc) {
            ctx->pc = 0x2534D0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2534CCu;
            // 0x2534d0: 0x8e021064  lw          $v0, 0x1064($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4196)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2534E8u;
            goto label_2534e8;
        }
    }
    ctx->pc = 0x2534D4u;
    // 0x2534d4: 0x8e040334  lw          $a0, 0x334($s0)
    ctx->pc = 0x2534d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 820)));
    // 0x2534d8: 0xc069888  jal         func_1A6220
    ctx->pc = 0x2534D8u;
    SET_GPR_U32(ctx, 31, 0x2534E0u);
    ctx->pc = 0x2534DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2534D8u;
    // 0x2534dc: 0x2405010f  addiu       $a1, $zero, 0x10F (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 271));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A6220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A6220u, 0x2534D8u, 0x2534E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2534E0u;
label_2534e0:
    // 0x2534e0: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x2534E0u;
    {
        const bool branch_taken_0x2534e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2534E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2534E0u;
        // 0x2534e4: 0xae001064  sw          $zero, 0x1064($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4196), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2534e0) {
            ctx->pc = 0x25350Cu;
            goto label_25350c;
        }
    }
    ctx->pc = 0x2534E8u;
label_2534e8:
    // 0x2534e8: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2534E8u;
    {
        const bool branch_taken_0x2534e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2534ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2534E8u;
        // 0x2534ec: 0x8e040334  lw          $a0, 0x334($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 820)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2534e8) {
            ctx->pc = 0x253504u;
            goto label_253504;
        }
    }
    ctx->pc = 0x2534F0u;
    // 0x2534f0: 0xc069880  jal         func_1A6200
    ctx->pc = 0x2534F0u;
    SET_GPR_U32(ctx, 31, 0x2534F8u);
    ctx->pc = 0x2534F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2534F0u;
    // 0x2534f4: 0x24050074  addiu       $a1, $zero, 0x74 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 116));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A6200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A6200u, 0x2534F0u, 0x2534F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2534F8u;
label_2534f8:
    // 0x2534f8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2534f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2534fc: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2534FCu;
    {
        const bool branch_taken_0x2534fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x253500u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2534FCu;
        // 0x253500: 0xae021064  sw          $v0, 0x1064($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4196), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2534fc) {
            ctx->pc = 0x25350Cu;
            goto label_25350c;
        }
    }
    ctx->pc = 0x253504u;
label_253504:
    // 0x253504: 0xc069888  jal         func_1A6220
    ctx->pc = 0x253504u;
    SET_GPR_U32(ctx, 31, 0x25350Cu);
    ctx->pc = 0x253508u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x253504u;
    // 0x253508: 0x2405010e  addiu       $a1, $zero, 0x10E (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 270));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A6220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A6220u, 0x253504u, 0x25350Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25350Cu;
label_25350c:
    // 0x25350c: 0x8e040334  lw          $a0, 0x334($s0)
    ctx->pc = 0x25350cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 820)));
label_253510:
    // 0x253510: 0xc06a23e  jal         func_1A88F8
    ctx->pc = 0x253510u;
    SET_GPR_U32(ctx, 31, 0x253518u);
    ctx->pc = 0x253514u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x253510u;
    // 0x253514: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A88F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A88F8u, 0x253510u, 0x253518u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x253518u;
label_253518:
    // 0x253518: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x253518u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_25351c:
    // 0x25351c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x25351cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x253520: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x253520u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x253524: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x253524u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x253528: 0x3e00008  jr          $ra
    ctx->pc = 0x253528u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x25352Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x253528u;
        // 0x25352c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x253528u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x253530u;
}
