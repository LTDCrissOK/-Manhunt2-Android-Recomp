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

// Function: sub_0039C758
// Address: 0x39c758 - 0x39c888
void sub_0039C758_0x39c758(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0039C758_0x39c758");
#endif

    switch (ctx->pc) {
        case 0x39c784u: goto label_39c784;
        case 0x39c7a4u: goto label_39c7a4;
        case 0x39c7c8u: goto label_39c7c8;
        case 0x39c7d8u: goto label_39c7d8;
        case 0x39c804u: goto label_39c804;
        case 0x39c86cu: goto label_39c86c;
        default: break;
    }

    ctx->pc = 0x39c758u;

    // 0x39c758: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x39c758u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x39c75c: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x39c75cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x39c760: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x39c760u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39c764: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x39c764u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x39c768: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x39c768u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39c76c: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x39c76cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x39c770: 0x16400007  bnez        $s2, . + 4 + (0x7 << 2)
    ctx->pc = 0x39C770u;
    {
        const bool branch_taken_0x39c770 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x39C774u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39C770u;
        // 0x39c774: 0xffbf0028  sd          $ra, 0x28($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39c770) {
            ctx->pc = 0x39C790u;
            goto label_39c790;
        }
    }
    ctx->pc = 0x39C778u;
    // 0x39c778: 0x3c040048  lui         $a0, 0x48
    ctx->pc = 0x39c778u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)72 << 16));
    // 0x39c77c: 0xc0ec0fe  jal         func_3B03F8
    ctx->pc = 0x39C77Cu;
    SET_GPR_U32(ctx, 31, 0x39C784u);
    ctx->pc = 0x39C780u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39C77Cu;
    // 0x39c780: 0x2484b900  addiu       $a0, $a0, -0x4700 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949120));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B03F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B03F8u, 0x39C77Cu, 0x39C784u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39C784u;
label_39c784:
    // 0x39c784: 0x1000003a  b           . + 4 + (0x3A << 2)
    ctx->pc = 0x39C784u;
    {
        const bool branch_taken_0x39c784 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x39C788u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39C784u;
        // 0x39c788: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39c784) {
            ctx->pc = 0x39C870u;
            goto label_39c870;
        }
    }
    ctx->pc = 0x39C78Cu;
    // 0x39c78c: 0x0  nop
    ctx->pc = 0x39c78cu;
    // NOP
label_39c790:
    // 0x39c790: 0x82420072  lb          $v0, 0x72($s2)
    ctx->pc = 0x39c790u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 114)));
    // 0x39c794: 0x12020035  beq         $s0, $v0, . + 4 + (0x35 << 2)
    ctx->pc = 0x39C794u;
    {
        const bool branch_taken_0x39c794 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x39C798u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39C794u;
        // 0x39c798: 0x82510001  lb          $s1, 0x1($s2) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 1)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39c794) {
            ctx->pc = 0x39C86Cu;
            goto label_39c86c;
        }
    }
    ctx->pc = 0x39C79Cu;
    // 0x39c79c: 0xc0ebe50  jal         func_3AF940
    ctx->pc = 0x39C79Cu;
    SET_GPR_U32(ctx, 31, 0x39C7A4u);
    ctx->pc = 0x3AF940u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AF940u, 0x39C79Cu, 0x39C7A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39C7A4u;
label_39c7a4:
    // 0x39c7a4: 0x2622fffd  addiu       $v0, $s1, -0x3
    ctx->pc = 0x39c7a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967293));
    // 0x39c7a8: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x39c7a8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x39c7ac: 0x1040002d  beqz        $v0, . + 4 + (0x2D << 2)
    ctx->pc = 0x39C7ACu;
    {
        const bool branch_taken_0x39c7ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x39C7B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39C7ACu;
        // 0x39c7b0: 0xa2500072  sb          $s0, 0x72($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 114), (uint8_t)GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39c7ac) {
            ctx->pc = 0x39C864u;
            goto label_39c864;
        }
    }
    ctx->pc = 0x39C7B4u;
    // 0x39c7b4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x39c7b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x39c7b8: 0x16020005  bne         $s0, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x39C7B8u;
    {
        const bool branch_taken_0x39c7b8 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x39C7BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39C7B8u;
        // 0x39c7bc: 0x8e44000c  lw          $a0, 0xC($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39c7b8) {
            ctx->pc = 0x39C7D0u;
            goto label_39c7d0;
        }
    }
    ctx->pc = 0x39C7C0u;
    // 0x39c7c0: 0xc0e5f26  jal         func_397C98
    ctx->pc = 0x39C7C0u;
    SET_GPR_U32(ctx, 31, 0x39C7C8u);
    ctx->pc = 0x39C7C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39C7C0u;
    // 0x39c7c4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x397C98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x397C98u, 0x39C7C0u, 0x39C7C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39C7C8u;
label_39c7c8:
    // 0x39c7c8: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x39C7C8u;
    {
        const bool branch_taken_0x39c7c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x39C7CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39C7C8u;
        // 0x39c7cc: 0x3c100041  lui         $s0, 0x41 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)65 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39c7c8) {
            ctx->pc = 0x39C7E8u;
            goto label_39c7e8;
        }
    }
    ctx->pc = 0x39C7D0u;
label_39c7d0:
    // 0x39c7d0: 0xc0e5f26  jal         func_397C98
    ctx->pc = 0x39C7D0u;
    SET_GPR_U32(ctx, 31, 0x39C7D8u);
    ctx->pc = 0x39C7D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39C7D0u;
    // 0x39c7d4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x397C98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x397C98u, 0x39C7D0u, 0x39C7D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39C7D8u;
label_39c7d8:
    // 0x39c7d8: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x39c7d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x39c7dc: 0x8c430c20  lw          $v1, 0xC20($v0)
    ctx->pc = 0x39c7dcu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x400C20u));
    // 0x39c7e0: 0xae4300a0  sw          $v1, 0xA0($s2)
    ctx->pc = 0x39c7e0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 160), GPR_U32(ctx, 3));
    // 0x39c7e4: 0x3c100041  lui         $s0, 0x41
    ctx->pc = 0x39c7e4u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)65 << 16));
label_39c7e8:
    // 0x39c7e8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x39c7e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39c7ec: 0x2610ad88  addiu       $s0, $s0, -0x5278
    ctx->pc = 0x39c7ecu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294946184));
    // 0x39c7f0: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x39c7f0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39c7f4: 0x8e110000  lw          $s1, 0x0($s0)
    ctx->pc = 0x39c7f4u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x39c7f8: 0x27a60004  addiu       $a2, $sp, 0x4
    ctx->pc = 0x39c7f8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
    // 0x39c7fc: 0xc0e6eb4  jal         func_39BAD0
    ctx->pc = 0x39C7FCu;
    SET_GPR_U32(ctx, 31, 0x39C804u);
    ctx->pc = 0x39C800u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39C7FCu;
    // 0x39c800: 0xae000000  sw          $zero, 0x0($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x39BAD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39BAD0u, 0x39C7FCu, 0x39C804u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39C804u;
label_39c804:
    // 0x39c804: 0x3c020041  lui         $v0, 0x41
    ctx->pc = 0x39c804u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65 << 16));
    // 0x39c808: 0xc7a00000  lwc1        $f0, 0x0($sp)
    ctx->pc = 0x39c808u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x39c80c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x39c80cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x39c810: 0x3c014f00  lui         $at, 0x4F00
    ctx->pc = 0x39c810u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)20224 << 16));
    // 0x39c814: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x39c814u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x39c818: 0xc7a20004  lwc1        $f2, 0x4($sp)
    ctx->pc = 0x39c818u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x39c81c: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x39c81cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x39c820: 0xc441add4  lwc1        $f1, -0x522C($v0)
    ctx->pc = 0x39c820u;
    { uint32_t bits = FAST_READ32(0x40ADD4u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x39c824: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x39c824u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x39c828: 0x0  nop
    ctx->pc = 0x39c828u;
    // NOP
    // 0x39c82c: 0x0  nop
    ctx->pc = 0x39c82cu;
    // NOP
    // 0x39c830: 0x46020003  div.s       $f0, $f0, $f2
    ctx->pc = 0x39c830u;
    { if (ctx->f[2] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[2]); }
    // 0x39c834: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x39c834u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x39c838: 0x46001836  c.le.s      $f3, $f0
    ctx->pc = 0x39c838u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[3], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x39c83c: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x39c83cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x39c840: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x39c840u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x39c844: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x39C844u;
    {
        const bool branch_taken_0x39c844 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x39C848u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39C844u;
        // 0x39c848: 0xae110000  sw          $s1, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39c844) {
            ctx->pc = 0x39C860u;
            goto label_39c860;
        }
    }
    ctx->pc = 0x39C84Cu;
    // 0x39c84c: 0x46030001  sub.s       $f0, $f0, $f3
    ctx->pc = 0x39c84cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[3]);
    // 0x39c850: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x39c850u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x39c854: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x39c854u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x39c858: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x39c858u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x39c85c: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x39c85cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_39c860:
    // 0x39c860: 0xae43009c  sw          $v1, 0x9C($s2)
    ctx->pc = 0x39c860u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 156), GPR_U32(ctx, 3));
label_39c864:
    // 0x39c864: 0xc0ebe56  jal         func_3AF958
    ctx->pc = 0x39C864u;
    SET_GPR_U32(ctx, 31, 0x39C86Cu);
    ctx->pc = 0x3AF958u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AF958u, 0x39C864u, 0x39C86Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39C86Cu;
label_39c86c:
    // 0x39c86c: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x39c86cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_39c870:
    // 0x39c870: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x39c870u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x39c874: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x39c874u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x39c878: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x39c878u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x39c87c: 0x3e00008  jr          $ra
    ctx->pc = 0x39C87Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x39C880u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39C87Cu;
        // 0x39c880: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x39C87Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x39C884u;
    // 0x39c884: 0x0  nop
    ctx->pc = 0x39c884u;
    // NOP
    ctx->pc = 0x39c888u;
}
