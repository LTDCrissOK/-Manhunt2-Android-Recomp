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

// Function: sub_002485E0
// Address: 0x2485e0 - 0x248758
void sub_002485E0_0x2485e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002485E0_0x2485e0");
#endif

    switch (ctx->pc) {
        case 0x248600u: goto label_248600;
        case 0x248618u: goto label_248618;
        case 0x248748u: goto label_248748;
        default: break;
    }

    ctx->pc = 0x2485e0u;

    // 0x2485e0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2485e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2485e4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2485e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2485e8: 0x8c860334  lw          $a2, 0x334($a0)
    ctx->pc = 0x2485e8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 820)));
    // 0x2485ec: 0x8cc201e4  lw          $v0, 0x1E4($a2)
    ctx->pc = 0x2485ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 484)));
    // 0x2485f0: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2485F0u;
    {
        const bool branch_taken_0x2485f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2485F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2485F0u;
        // 0x2485f4: 0x40182d  daddu       $v1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2485f0) {
            ctx->pc = 0x248608u;
            goto label_248608;
        }
    }
    ctx->pc = 0x2485F8u;
    // 0x2485f8: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x2485F8u;
    {
        const bool branch_taken_0x2485f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2485FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2485F8u;
        // 0x2485fc: 0xc0382d  daddu       $a3, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2485f8) {
            ctx->pc = 0x248634u;
            goto label_248634;
        }
    }
    ctx->pc = 0x248600u;
label_248600:
    // 0x248600: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x248600u;
    {
        const bool branch_taken_0x248600 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x248604u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x248600u;
        // 0x248604: 0x40182d  daddu       $v1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x248600) {
            ctx->pc = 0x248634u;
            goto label_248634;
        }
    }
    ctx->pc = 0x248608u;
label_248608:
    // 0x248608: 0xc0382d  daddu       $a3, $a2, $zero
    ctx->pc = 0x248608u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24860c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x24860cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x248610: 0x24e301ec  addiu       $v1, $a3, 0x1EC
    ctx->pc = 0x248610u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), 492));
    // 0x248614: 0x0  nop
    ctx->pc = 0x248614u;
    // NOP
label_248618:
    // 0x248618: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x248618u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x24861c: 0x1440fff8  bnez        $v0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x24861Cu;
    {
        const bool branch_taken_0x24861c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x248620u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24861Cu;
        // 0x248620: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24861c) {
            ctx->pc = 0x248600u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_248600;
        }
    }
    ctx->pc = 0x248624u;
    // 0x248624: 0x28a20004  slti        $v0, $a1, 0x4
    ctx->pc = 0x248624u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x248628: 0x1440fffb  bnez        $v0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x248628u;
    {
        const bool branch_taken_0x248628 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x24862Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x248628u;
        // 0x24862c: 0x24630004  addiu       $v1, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x248628) {
            ctx->pc = 0x248618u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_248618;
        }
    }
    ctx->pc = 0x248630u;
    // 0x248630: 0x8cc301e8  lw          $v1, 0x1E8($a2)
    ctx->pc = 0x248630u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 488)));
label_248634:
    // 0x248634: 0xc463001c  lwc1        $f3, 0x1C($v1)
    ctx->pc = 0x248634u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x248638: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x248638u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24863c: 0xc4600020  lwc1        $f0, 0x20($v1)
    ctx->pc = 0x24863cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x248640: 0x8ce20160  lw          $v0, 0x160($a3)
    ctx->pc = 0x248640u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 352)));
    // 0x248644: 0x10400034  beqz        $v0, . + 4 + (0x34 << 2)
    ctx->pc = 0x248644u;
    {
        const bool branch_taken_0x248644 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x248648u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x248644u;
        // 0x248648: 0x46001841  sub.s       $f1, $f3, $f0 (Delay Slot)
        ctx->f[1] = FPU_SUB_S(ctx->f[3], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x248644) {
            ctx->pc = 0x248718u;
            goto label_248718;
        }
    }
    ctx->pc = 0x24864Cu;
    // 0x24864c: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x24864cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x248650: 0x3c013f03  lui         $at, 0x3F03
    ctx->pc = 0x248650u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16131 << 16));
    // 0x248654: 0x342142ff  ori         $at, $at, 0x42FF
    ctx->pc = 0x248654u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)17151);
    // 0x248658: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x248658u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x24865c: 0xc4400010  lwc1        $f0, 0x10($v0)
    ctx->pc = 0x24865cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x248660: 0x0  nop
    ctx->pc = 0x248660u;
    // NOP
    // 0x248664: 0x0  nop
    ctx->pc = 0x248664u;
    // NOP
    // 0x248668: 0x46000883  div.s       $f2, $f1, $f0
    ctx->pc = 0x248668u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[2] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x24866c: 0x0  nop
    ctx->pc = 0x24866cu;
    // NOP
    // 0x248670: 0x0  nop
    ctx->pc = 0x248670u;
    // NOP
    // 0x248674: 0x46001803  div.s       $f0, $f3, $f0
    ctx->pc = 0x248674u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[3], ctx->f[0]); }
    // 0x248678: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x248678u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x24867c: 0x0  nop
    ctx->pc = 0x24867cu;
    // NOP
    // 0x248680: 0x45000012  bc1f        . + 4 + (0x12 << 2)
    ctx->pc = 0x248680u;
    {
        const bool branch_taken_0x248680 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x248680) {
            ctx->pc = 0x2486CCu;
            goto label_2486cc;
        }
    }
    ctx->pc = 0x248688u;
    // 0x248688: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x248688u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x24868c: 0x0  nop
    ctx->pc = 0x24868cu;
    // NOP
    // 0x248690: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x248690u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x248694: 0x0  nop
    ctx->pc = 0x248694u;
    // NOP
    // 0x248698: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x248698u;
    {
        const bool branch_taken_0x248698 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x248698) {
            ctx->pc = 0x2486B0u;
            goto label_2486b0;
        }
    }
    ctx->pc = 0x2486A0u;
    // 0x2486a0: 0x46011034  c.lt.s      $f2, $f1
    ctx->pc = 0x2486a0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2486a4: 0x0  nop
    ctx->pc = 0x2486a4u;
    // NOP
    // 0x2486a8: 0x4503001b  bc1tl       . + 4 + (0x1B << 2)
    ctx->pc = 0x2486A8u;
    {
        const bool branch_taken_0x2486a8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2486a8) {
            ctx->pc = 0x2486ACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2486A8u;
            // 0x2486ac: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x248718u;
            goto label_248718;
        }
    }
    ctx->pc = 0x2486B0u;
label_2486b0:
    // 0x2486b0: 0x46002036  c.le.s      $f4, $f0
    ctx->pc = 0x2486b0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[4], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2486b4: 0x0  nop
    ctx->pc = 0x2486b4u;
    // NOP
    // 0x2486b8: 0x45000017  bc1f        . + 4 + (0x17 << 2)
    ctx->pc = 0x2486B8u;
    {
        const bool branch_taken_0x2486b8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2486b8) {
            ctx->pc = 0x248718u;
            goto label_248718;
        }
    }
    ctx->pc = 0x2486C0u;
    // 0x2486c0: 0x46041034  c.lt.s      $f2, $f4
    ctx->pc = 0x2486c0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[4])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2486c4: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x2486C4u;
    {
        const bool branch_taken_0x2486c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2486c4) {
            ctx->pc = 0x24870Cu;
            goto label_24870c;
        }
    }
    ctx->pc = 0x2486CCu;
label_2486cc:
    // 0x2486cc: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2486ccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2486d0: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2486d0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2486d4: 0x0  nop
    ctx->pc = 0x2486d4u;
    // NOP
    // 0x2486d8: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x2486d8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2486dc: 0x0  nop
    ctx->pc = 0x2486dcu;
    // NOP
    // 0x2486e0: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x2486E0u;
    {
        const bool branch_taken_0x2486e0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2486e0) {
            ctx->pc = 0x2486F8u;
            goto label_2486f8;
        }
    }
    ctx->pc = 0x2486E8u;
    // 0x2486e8: 0x46020834  c.lt.s      $f1, $f2
    ctx->pc = 0x2486e8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2486ec: 0x0  nop
    ctx->pc = 0x2486ecu;
    // NOP
    // 0x2486f0: 0x45030009  bc1tl       . + 4 + (0x9 << 2)
    ctx->pc = 0x2486F0u;
    {
        const bool branch_taken_0x2486f0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2486f0) {
            ctx->pc = 0x2486F4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2486F0u;
            // 0x2486f4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x248718u;
            goto label_248718;
        }
    }
    ctx->pc = 0x2486F8u;
label_2486f8:
    // 0x2486f8: 0x46040036  c.le.s      $f0, $f4
    ctx->pc = 0x2486f8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[4])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2486fc: 0x0  nop
    ctx->pc = 0x2486fcu;
    // NOP
    // 0x248700: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x248700u;
    {
        const bool branch_taken_0x248700 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x248700) {
            ctx->pc = 0x248718u;
            goto label_248718;
        }
    }
    ctx->pc = 0x248708u;
    // 0x248708: 0x46022034  c.lt.s      $f4, $f2
    ctx->pc = 0x248708u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[4], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_24870c:
    // 0x24870c: 0x0  nop
    ctx->pc = 0x24870cu;
    // NOP
    // 0x248710: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x248710u;
    {
        const bool branch_taken_0x248710 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x248710) {
            ctx->pc = 0x248714u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x248710u;
            // 0x248714: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x248718u;
            goto label_248718;
        }
    }
    ctx->pc = 0x248718u;
label_248718:
    // 0x248718: 0x10a0000b  beqz        $a1, . + 4 + (0xB << 2)
    ctx->pc = 0x248718u;
    {
        const bool branch_taken_0x248718 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x24871Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x248718u;
        // 0x24871c: 0x3c070046  lui         $a3, 0x46 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)70 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x248718) {
            ctx->pc = 0x248748u;
            goto label_248748;
        }
    }
    ctx->pc = 0x248720u;
    // 0x248720: 0x8c820104  lw          $v0, 0x104($a0)
    ctx->pc = 0x248720u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 260)));
    // 0x248724: 0x3c04004a  lui         $a0, 0x4A
    ctx->pc = 0x248724u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)74 << 16));
    // 0x248728: 0x24e75300  addiu       $a3, $a3, 0x5300
    ctx->pc = 0x248728u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 21248));
    // 0x24872c: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x24872cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x248730: 0x24849b10  addiu       $a0, $a0, -0x64F0
    ctx->pc = 0x248730u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941456));
    // 0x248734: 0x24060003  addiu       $a2, $zero, 0x3
    ctx->pc = 0x248734u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x248738: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x248738u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x24873c: 0x24a50070  addiu       $a1, $a1, 0x70
    ctx->pc = 0x24873cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 112));
    // 0x248740: 0xc07f672  jal         func_1FD9C8
    ctx->pc = 0x248740u;
    SET_GPR_U32(ctx, 31, 0x248748u);
    ctx->pc = 0x248744u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x248740u;
    // 0x248744: 0x2409ffff  addiu       $t1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD9C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD9C8u, 0x248740u, 0x248748u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x248748u;
label_248748:
    // 0x248748: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x248748u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x24874c: 0x3e00008  jr          $ra
    ctx->pc = 0x24874Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x248750u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24874Cu;
        // 0x248750: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24874Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x248754u;
    // 0x248754: 0x0  nop
    ctx->pc = 0x248754u;
    // NOP
    ctx->pc = 0x248758u;
}
