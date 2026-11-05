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

// Function: sub_002304E8
// Address: 0x2304e8 - 0x230728
void sub_002304E8_0x2304e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002304E8_0x2304e8");
#endif

    switch (ctx->pc) {
        case 0x230540u: goto label_230540;
        case 0x2305e0u: goto label_2305e0;
        case 0x230618u: goto label_230618;
        case 0x230628u: goto label_230628;
        case 0x230660u: goto label_230660;
        case 0x2306dcu: goto label_2306dc;
        case 0x2306fcu: goto label_2306fc;
        case 0x230718u: goto label_230718;
        default: break;
    }

    ctx->pc = 0x2304e8u;

    // 0x2304e8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2304e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2304ec: 0x3c030001  lui         $v1, 0x1
    ctx->pc = 0x2304ecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
    // 0x2304f0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2304f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2304f4: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x2304f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x2304f8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2304f8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2304fc: 0x8e02036c  lw          $v0, 0x36C($s0)
    ctx->pc = 0x2304fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 876)));
    // 0x230500: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x230500u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x230504: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x230504u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x230508: 0x5443000f  bnel        $v0, $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x230508u;
    {
        const bool branch_taken_0x230508 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x230508) {
            ctx->pc = 0x23050Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x230508u;
            // 0x23050c: 0x8e02058c  lw          $v0, 0x58C($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1420)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x230548u;
            goto label_230548;
        }
    }
    ctx->pc = 0x230510u;
    // 0x230510: 0x3c030002  lui         $v1, 0x2
    ctx->pc = 0x230510u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2 << 16));
    // 0x230514: 0x831024  and         $v0, $a0, $v1
    ctx->pc = 0x230514u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x230518: 0x5443000b  bnel        $v0, $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x230518u;
    {
        const bool branch_taken_0x230518 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x230518) {
            ctx->pc = 0x23051Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x230518u;
            // 0x23051c: 0x8e02058c  lw          $v0, 0x58C($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1420)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x230548u;
            goto label_230548;
        }
    }
    ctx->pc = 0x230520u;
    // 0x230520: 0x8e020334  lw          $v0, 0x334($s0)
    ctx->pc = 0x230520u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 820)));
    // 0x230524: 0x24040036  addiu       $a0, $zero, 0x36
    ctx->pc = 0x230524u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 54));
    // 0x230528: 0x8c430150  lw          $v1, 0x150($v0)
    ctx->pc = 0x230528u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 336)));
    // 0x23052c: 0x1064007a  beq         $v1, $a0, . + 4 + (0x7A << 2)
    ctx->pc = 0x23052Cu;
    {
        const bool branch_taken_0x23052c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        ctx->pc = 0x230530u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23052Cu;
        // 0x230530: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23052c) {
            ctx->pc = 0x230718u;
            goto label_230718;
        }
    }
    ctx->pc = 0x230534u;
    // 0x230534: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x230534u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x230538: 0xc08bf70  jal         func_22FDC0
    ctx->pc = 0x230538u;
    SET_GPR_U32(ctx, 31, 0x230540u);
    ctx->pc = 0x23053Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x230538u;
    // 0x23053c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22FDC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22FDC0u, 0x230538u, 0x230540u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x230540u;
label_230540:
    // 0x230540: 0x10000076  b           . + 4 + (0x76 << 2)
    ctx->pc = 0x230540u;
    {
        const bool branch_taken_0x230540 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x230544u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x230540u;
        // 0x230544: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x230540) {
            ctx->pc = 0x23071Cu;
            goto label_23071c;
        }
    }
    ctx->pc = 0x230548u;
label_230548:
    // 0x230548: 0x10400027  beqz        $v0, . + 4 + (0x27 << 2)
    ctx->pc = 0x230548u;
    {
        const bool branch_taken_0x230548 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23054Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x230548u;
        // 0x23054c: 0x3c030002  lui         $v1, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x230548) {
            ctx->pc = 0x2305E8u;
            goto label_2305e8;
        }
    }
    ctx->pc = 0x230550u;
    // 0x230550: 0x831024  and         $v0, $a0, $v1
    ctx->pc = 0x230550u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x230554: 0x54430071  bnel        $v0, $v1, . + 4 + (0x71 << 2)
    ctx->pc = 0x230554u;
    {
        const bool branch_taken_0x230554 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x230554) {
            ctx->pc = 0x230558u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x230554u;
            // 0x230558: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23071Cu;
            goto label_23071c;
        }
    }
    ctx->pc = 0x23055Cu;
    // 0x23055c: 0xc60104f8  lwc1        $f1, 0x4F8($s0)
    ctx->pc = 0x23055cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x230560: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x230560u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x230564: 0x0  nop
    ctx->pc = 0x230564u;
    // NOP
    // 0x230568: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x230568u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x23056c: 0x0  nop
    ctx->pc = 0x23056cu;
    // NOP
    // 0x230570: 0x45010039  bc1t        . + 4 + (0x39 << 2)
    ctx->pc = 0x230570u;
    {
        const bool branch_taken_0x230570 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x230570) {
            ctx->pc = 0x230658u;
            goto label_230658;
        }
    }
    ctx->pc = 0x230578u;
    // 0x230578: 0x8e030334  lw          $v1, 0x334($s0)
    ctx->pc = 0x230578u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 820)));
    // 0x23057c: 0x8c640150  lw          $a0, 0x150($v1)
    ctx->pc = 0x23057cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 336)));
    // 0x230580: 0x2c820002  sltiu       $v0, $a0, 0x2
    ctx->pc = 0x230580u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x230584: 0x1440000c  bnez        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x230584u;
    {
        const bool branch_taken_0x230584 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x230588u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x230584u;
        // 0x230588: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x230584) {
            ctx->pc = 0x2305B8u;
            goto label_2305b8;
        }
    }
    ctx->pc = 0x23058Cu;
    // 0x23058c: 0x2402001c  addiu       $v0, $zero, 0x1C
    ctx->pc = 0x23058cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    // 0x230590: 0x10820009  beq         $a0, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x230590u;
    {
        const bool branch_taken_0x230590 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x230594u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x230590u;
        // 0x230594: 0x2402001b  addiu       $v0, $zero, 0x1B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 27));
        ctx->in_delay_slot = false;
        if (branch_taken_0x230590) {
            ctx->pc = 0x2305B8u;
            goto label_2305b8;
        }
    }
    ctx->pc = 0x230598u;
    // 0x230598: 0x10820007  beq         $a0, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x230598u;
    {
        const bool branch_taken_0x230598 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x23059Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x230598u;
        // 0x23059c: 0x24020046  addiu       $v0, $zero, 0x46 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 70));
        ctx->in_delay_slot = false;
        if (branch_taken_0x230598) {
            ctx->pc = 0x2305B8u;
            goto label_2305b8;
        }
    }
    ctx->pc = 0x2305A0u;
    // 0x2305a0: 0x10820005  beq         $a0, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2305A0u;
    {
        const bool branch_taken_0x2305a0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x2305A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2305A0u;
        // 0x2305a4: 0x24020032  addiu       $v0, $zero, 0x32 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2305a0) {
            ctx->pc = 0x2305B8u;
            goto label_2305b8;
        }
    }
    ctx->pc = 0x2305A8u;
    // 0x2305a8: 0x10820003  beq         $a0, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2305A8u;
    {
        const bool branch_taken_0x2305a8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x2305ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2305A8u;
        // 0x2305ac: 0x24020033  addiu       $v0, $zero, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 51));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2305a8) {
            ctx->pc = 0x2305B8u;
            goto label_2305b8;
        }
    }
    ctx->pc = 0x2305B0u;
    // 0x2305b0: 0x14820002  bne         $a0, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x2305B0u;
    {
        const bool branch_taken_0x2305b0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x2305b0) {
            ctx->pc = 0x2305BCu;
            goto label_2305bc;
        }
    }
    ctx->pc = 0x2305B8u;
label_2305b8:
    // 0x2305b8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2305b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2305bc:
    // 0x2305bc: 0x14a00006  bnez        $a1, . + 4 + (0x6 << 2)
    ctx->pc = 0x2305BCu;
    {
        const bool branch_taken_0x2305bc = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x2305C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2305BCu;
        // 0x2305c0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2305bc) {
            ctx->pc = 0x2305D8u;
            goto label_2305d8;
        }
    }
    ctx->pc = 0x2305C4u;
    // 0x2305c4: 0x8c630150  lw          $v1, 0x150($v1)
    ctx->pc = 0x2305c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 336)));
    // 0x2305c8: 0x24020037  addiu       $v0, $zero, 0x37
    ctx->pc = 0x2305c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 55));
    // 0x2305cc: 0x54620053  bnel        $v1, $v0, . + 4 + (0x53 << 2)
    ctx->pc = 0x2305CCu;
    {
        const bool branch_taken_0x2305cc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2305cc) {
            ctx->pc = 0x2305D0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2305CCu;
            // 0x2305d0: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23071Cu;
            goto label_23071c;
        }
    }
    ctx->pc = 0x2305D4u;
    // 0x2305d4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2305d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2305d8:
    // 0x2305d8: 0xc08b39e  jal         func_22CE78
    ctx->pc = 0x2305D8u;
    SET_GPR_U32(ctx, 31, 0x2305E0u);
    ctx->pc = 0x2305DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2305D8u;
    // 0x2305dc: 0x24050016  addiu       $a1, $zero, 0x16 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22CE78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22CE78u, 0x2305D8u, 0x2305E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2305E0u;
label_2305e0:
    // 0x2305e0: 0x1000004e  b           . + 4 + (0x4E << 2)
    ctx->pc = 0x2305E0u;
    {
        const bool branch_taken_0x2305e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2305E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2305E0u;
        // 0x2305e4: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2305e0) {
            ctx->pc = 0x23071Cu;
            goto label_23071c;
        }
    }
    ctx->pc = 0x2305E8u;
label_2305e8:
    // 0x2305e8: 0x8e020588  lw          $v0, 0x588($s0)
    ctx->pc = 0x2305e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1416)));
    // 0x2305ec: 0x5040003d  beql        $v0, $zero, . + 4 + (0x3D << 2)
    ctx->pc = 0x2305ECu;
    {
        const bool branch_taken_0x2305ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2305ec) {
            ctx->pc = 0x2305F0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2305ECu;
            // 0x2305f0: 0x8e030418  lw          $v1, 0x418($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1048)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2306E4u;
            goto label_2306e4;
        }
    }
    ctx->pc = 0x2305F4u;
    // 0x2305f4: 0x8e030334  lw          $v1, 0x334($s0)
    ctx->pc = 0x2305f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 820)));
    // 0x2305f8: 0x8c620150  lw          $v0, 0x150($v1)
    ctx->pc = 0x2305f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 336)));
    // 0x2305fc: 0x2442ffcc  addiu       $v0, $v0, -0x34
    ctx->pc = 0x2305fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967244));
    // 0x230600: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x230600u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x230604: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x230604u;
    {
        const bool branch_taken_0x230604 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x230608u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x230604u;
        // 0x230608: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x230604) {
            ctx->pc = 0x230628u;
            goto label_230628;
        }
    }
    ctx->pc = 0x23060Cu;
    // 0x23060c: 0x3c052000  lui         $a1, 0x2000
    ctx->pc = 0x23060cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)8192 << 16));
    // 0x230610: 0xc08fed2  jal         func_23FB48
    ctx->pc = 0x230610u;
    SET_GPR_U32(ctx, 31, 0x230618u);
    ctx->pc = 0x230614u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x230610u;
    // 0x230614: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23FB48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23FB48u, 0x230610u, 0x230618u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x230618u;
label_230618:
    // 0x230618: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x230618u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23061c: 0x3c051000  lui         $a1, 0x1000
    ctx->pc = 0x23061cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)4096 << 16));
    // 0x230620: 0xc08fed2  jal         func_23FB48
    ctx->pc = 0x230620u;
    SET_GPR_U32(ctx, 31, 0x230628u);
    ctx->pc = 0x230624u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x230620u;
    // 0x230624: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23FB48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23FB48u, 0x230620u, 0x230628u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x230628u;
label_230628:
    // 0x230628: 0x8e02036c  lw          $v0, 0x36C($s0)
    ctx->pc = 0x230628u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 876)));
    // 0x23062c: 0x3c030001  lui         $v1, 0x1
    ctx->pc = 0x23062cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
    // 0x230630: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x230630u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x230634: 0x54430039  bnel        $v0, $v1, . + 4 + (0x39 << 2)
    ctx->pc = 0x230634u;
    {
        const bool branch_taken_0x230634 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x230634) {
            ctx->pc = 0x230638u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x230634u;
            // 0x230638: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23071Cu;
            goto label_23071c;
        }
    }
    ctx->pc = 0x23063Cu;
    // 0x23063c: 0xc60104f8  lwc1        $f1, 0x4F8($s0)
    ctx->pc = 0x23063cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x230640: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x230640u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x230644: 0x0  nop
    ctx->pc = 0x230644u;
    // NOP
    // 0x230648: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x230648u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x23064c: 0x0  nop
    ctx->pc = 0x23064cu;
    // NOP
    // 0x230650: 0x45020009  bc1fl       . + 4 + (0x9 << 2)
    ctx->pc = 0x230650u;
    {
        const bool branch_taken_0x230650 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x230650) {
            ctx->pc = 0x230654u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x230650u;
            // 0x230654: 0x8e030334  lw          $v1, 0x334($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 820)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x230678u;
            goto label_230678;
        }
    }
    ctx->pc = 0x230658u;
label_230658:
    // 0x230658: 0xc08c02e  jal         func_2300B8
    ctx->pc = 0x230658u;
    SET_GPR_U32(ctx, 31, 0x230660u);
    ctx->pc = 0x23065Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x230658u;
    // 0x23065c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2300B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2300B8u, 0x230658u, 0x230660u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x230660u;
label_230660:
    // 0x230660: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x230660u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x230664: 0xc60004f8  lwc1        $f0, 0x4F8($s0)
    ctx->pc = 0x230664u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x230668: 0xc4412b30  lwc1        $f1, 0x2B30($v0)
    ctx->pc = 0x230668u;
    { uint32_t bits = FAST_READ32(0x482B30u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x23066c: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x23066cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x230670: 0x10000029  b           . + 4 + (0x29 << 2)
    ctx->pc = 0x230670u;
    {
        const bool branch_taken_0x230670 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x230674u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x230670u;
        // 0x230674: 0xe60004f8  swc1        $f0, 0x4F8($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1272), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x230670) {
            ctx->pc = 0x230718u;
            goto label_230718;
        }
    }
    ctx->pc = 0x230678u;
label_230678:
    // 0x230678: 0x8c640150  lw          $a0, 0x150($v1)
    ctx->pc = 0x230678u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 336)));
    // 0x23067c: 0x2c820002  sltiu       $v0, $a0, 0x2
    ctx->pc = 0x23067cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x230680: 0x1440000c  bnez        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x230680u;
    {
        const bool branch_taken_0x230680 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x230684u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x230680u;
        // 0x230684: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x230680) {
            ctx->pc = 0x2306B4u;
            goto label_2306b4;
        }
    }
    ctx->pc = 0x230688u;
    // 0x230688: 0x2402001c  addiu       $v0, $zero, 0x1C
    ctx->pc = 0x230688u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    // 0x23068c: 0x10820009  beq         $a0, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x23068Cu;
    {
        const bool branch_taken_0x23068c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x230690u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23068Cu;
        // 0x230690: 0x2402001b  addiu       $v0, $zero, 0x1B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 27));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23068c) {
            ctx->pc = 0x2306B4u;
            goto label_2306b4;
        }
    }
    ctx->pc = 0x230694u;
    // 0x230694: 0x10820007  beq         $a0, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x230694u;
    {
        const bool branch_taken_0x230694 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x230698u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x230694u;
        // 0x230698: 0x24020046  addiu       $v0, $zero, 0x46 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 70));
        ctx->in_delay_slot = false;
        if (branch_taken_0x230694) {
            ctx->pc = 0x2306B4u;
            goto label_2306b4;
        }
    }
    ctx->pc = 0x23069Cu;
    // 0x23069c: 0x10820005  beq         $a0, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x23069Cu;
    {
        const bool branch_taken_0x23069c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x2306A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23069Cu;
        // 0x2306a0: 0x24020032  addiu       $v0, $zero, 0x32 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23069c) {
            ctx->pc = 0x2306B4u;
            goto label_2306b4;
        }
    }
    ctx->pc = 0x2306A4u;
    // 0x2306a4: 0x10820003  beq         $a0, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2306A4u;
    {
        const bool branch_taken_0x2306a4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x2306A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2306A4u;
        // 0x2306a8: 0x24020033  addiu       $v0, $zero, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 51));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2306a4) {
            ctx->pc = 0x2306B4u;
            goto label_2306b4;
        }
    }
    ctx->pc = 0x2306ACu;
    // 0x2306ac: 0x14820002  bne         $a0, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x2306ACu;
    {
        const bool branch_taken_0x2306ac = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x2306ac) {
            ctx->pc = 0x2306B8u;
            goto label_2306b8;
        }
    }
    ctx->pc = 0x2306B4u;
label_2306b4:
    // 0x2306b4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2306b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2306b8:
    // 0x2306b8: 0x14a00006  bnez        $a1, . + 4 + (0x6 << 2)
    ctx->pc = 0x2306B8u;
    {
        const bool branch_taken_0x2306b8 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x2306BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2306B8u;
        // 0x2306bc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2306b8) {
            ctx->pc = 0x2306D4u;
            goto label_2306d4;
        }
    }
    ctx->pc = 0x2306C0u;
    // 0x2306c0: 0x8c630150  lw          $v1, 0x150($v1)
    ctx->pc = 0x2306c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 336)));
    // 0x2306c4: 0x24020037  addiu       $v0, $zero, 0x37
    ctx->pc = 0x2306c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 55));
    // 0x2306c8: 0x54620014  bnel        $v1, $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x2306C8u;
    {
        const bool branch_taken_0x2306c8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2306c8) {
            ctx->pc = 0x2306CCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2306C8u;
            // 0x2306cc: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23071Cu;
            goto label_23071c;
        }
    }
    ctx->pc = 0x2306D0u;
    // 0x2306d0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2306d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2306d4:
    // 0x2306d4: 0xc08b39e  jal         func_22CE78
    ctx->pc = 0x2306D4u;
    SET_GPR_U32(ctx, 31, 0x2306DCu);
    ctx->pc = 0x2306D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2306D4u;
    // 0x2306d8: 0x24050015  addiu       $a1, $zero, 0x15 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22CE78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22CE78u, 0x2306D4u, 0x2306DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2306DCu;
label_2306dc:
    // 0x2306dc: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x2306DCu;
    {
        const bool branch_taken_0x2306dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2306E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2306DCu;
        // 0x2306e0: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2306dc) {
            ctx->pc = 0x23071Cu;
            goto label_23071c;
        }
    }
    ctx->pc = 0x2306E4u;
label_2306e4:
    // 0x2306e4: 0x24020011  addiu       $v0, $zero, 0x11
    ctx->pc = 0x2306e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x2306e8: 0x54620005  bnel        $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2306E8u;
    {
        const bool branch_taken_0x2306e8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2306e8) {
            ctx->pc = 0x2306ECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2306E8u;
            // 0x2306ec: 0x8e030418  lw          $v1, 0x418($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1048)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x230700u;
            goto label_230700;
        }
    }
    ctx->pc = 0x2306F0u;
    // 0x2306f0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2306f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2306f4: 0xc08bd96  jal         func_22F658
    ctx->pc = 0x2306F4u;
    SET_GPR_U32(ctx, 31, 0x2306FCu);
    ctx->pc = 0x2306F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2306F4u;
    // 0x2306f8: 0x2405000e  addiu       $a1, $zero, 0xE (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22F658u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22F658u, 0x2306F4u, 0x2306FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2306FCu;
label_2306fc:
    // 0x2306fc: 0x8e030418  lw          $v1, 0x418($s0)
    ctx->pc = 0x2306fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1048)));
label_230700:
    // 0x230700: 0x2402000d  addiu       $v0, $zero, 0xD
    ctx->pc = 0x230700u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x230704: 0x54620005  bnel        $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x230704u;
    {
        const bool branch_taken_0x230704 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x230704) {
            ctx->pc = 0x230708u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x230704u;
            // 0x230708: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23071Cu;
            goto label_23071c;
        }
    }
    ctx->pc = 0x23070Cu;
    // 0x23070c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x23070cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x230710: 0xc08bd96  jal         func_22F658
    ctx->pc = 0x230710u;
    SET_GPR_U32(ctx, 31, 0x230718u);
    ctx->pc = 0x230714u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x230710u;
    // 0x230714: 0x2405000a  addiu       $a1, $zero, 0xA (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22F658u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22F658u, 0x230710u, 0x230718u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x230718u;
label_230718:
    // 0x230718: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x230718u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_23071c:
    // 0x23071c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x23071cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x230720: 0x3e00008  jr          $ra
    ctx->pc = 0x230720u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x230724u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x230720u;
        // 0x230724: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x230720u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x230728u;
}
