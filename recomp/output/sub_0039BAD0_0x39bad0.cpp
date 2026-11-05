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

// Function: sub_0039BAD0
// Address: 0x39bad0 - 0x39bdc8
void sub_0039BAD0_0x39bad0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0039BAD0_0x39bad0");
#endif

    switch (ctx->pc) {
        case 0x39bb20u: goto label_39bb20;
        case 0x39bb3cu: goto label_39bb3c;
        case 0x39bbb0u: goto label_39bbb0;
        case 0x39bc5cu: goto label_39bc5c;
        case 0x39bc64u: goto label_39bc64;
        case 0x39bcfcu: goto label_39bcfc;
        case 0x39bd08u: goto label_39bd08;
        case 0x39bd14u: goto label_39bd14;
        default: break;
    }

    ctx->pc = 0x39bad0u;

label_39bad0:
    // 0x39bad0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x39bad0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x39bad4: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x39bad4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x39bad8: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x39bad8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39badc: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x39badcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
    // 0x39bae0: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x39bae0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39bae4: 0xffb50038  sd          $s5, 0x38($sp)
    ctx->pc = 0x39bae4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 21));
    // 0x39bae8: 0xc0a82d  daddu       $s5, $a2, $zero
    ctx->pc = 0x39bae8u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39baec: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x39baecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x39baf0: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x39baf0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x39baf4: 0xffb40030  sd          $s4, 0x30($sp)
    ctx->pc = 0x39baf4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 20));
    // 0x39baf8: 0xffb60040  sd          $s6, 0x40($sp)
    ctx->pc = 0x39baf8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 22));
    // 0x39bafc: 0x12400005  beqz        $s2, . + 4 + (0x5 << 2)
    ctx->pc = 0x39BAFCu;
    {
        const bool branch_taken_0x39bafc = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x39BB00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39BAFCu;
        // 0x39bb00: 0xffbf0048  sd          $ra, 0x48($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39bafc) {
            ctx->pc = 0x39BB14u;
            goto label_39bb14;
        }
    }
    ctx->pc = 0x39BB04u;
    // 0x39bb04: 0x52600004  beql        $s3, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x39BB04u;
    {
        const bool branch_taken_0x39bb04 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x39bb04) {
            ctx->pc = 0x39BB08u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x39BB04u;
            // 0x39bb08: 0x3c040048  lui         $a0, 0x48 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)72 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x39BB18u;
            goto label_39bb18;
        }
    }
    ctx->pc = 0x39BB0Cu;
    // 0x39bb0c: 0x16a00006  bnez        $s5, . + 4 + (0x6 << 2)
    ctx->pc = 0x39BB0Cu;
    {
        const bool branch_taken_0x39bb0c = (GPR_U64(ctx, 21) != GPR_U64(ctx, 0));
        ctx->pc = 0x39BB10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39BB0Cu;
        // 0x39bb10: 0x3c100041  lui         $s0, 0x41 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)65 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39bb0c) {
            ctx->pc = 0x39BB28u;
            goto label_39bb28;
        }
    }
    ctx->pc = 0x39BB14u;
label_39bb14:
    // 0x39bb14: 0x3c040048  lui         $a0, 0x48
    ctx->pc = 0x39bb14u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)72 << 16));
label_39bb18:
    // 0x39bb18: 0xc0ec0fe  jal         func_3B03F8
    ctx->pc = 0x39BB18u;
    SET_GPR_U32(ctx, 31, 0x39BB20u);
    ctx->pc = 0x39BB1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39BB18u;
    // 0x39bb1c: 0x2484b380  addiu       $a0, $a0, -0x4C80 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294947712));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B03F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B03F8u, 0x39BB18u, 0x39BB20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39BB20u;
label_39bb20:
    // 0x39bb20: 0x1000009f  b           . + 4 + (0x9F << 2)
    ctx->pc = 0x39BB20u;
    {
        const bool branch_taken_0x39bb20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x39BB24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39BB20u;
        // 0x39bb24: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39bb20) {
            ctx->pc = 0x39BDA0u;
            goto label_39bda0;
        }
    }
    ctx->pc = 0x39BB28u;
label_39bb28:
    // 0x39bb28: 0x8e02ad88  lw          $v0, -0x5278($s0)
    ctx->pc = 0x39bb28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294946184)));
    // 0x39bb2c: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x39BB2Cu;
    {
        const bool branch_taken_0x39bb2c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x39BB30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39BB2Cu;
        // 0x39bb30: 0x3c110041  lui         $s1, 0x41 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)65 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39bb2c) {
            ctx->pc = 0x39BB48u;
            goto label_39bb48;
        }
    }
    ctx->pc = 0x39BB34u;
    // 0x39bb34: 0xc0e6e60  jal         func_39B980
    ctx->pc = 0x39BB34u;
    SET_GPR_U32(ctx, 31, 0x39BB3Cu);
    ctx->pc = 0x39B980u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39B980u, 0x39BB34u, 0x39BB3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39BB3Cu;
label_39bb3c:
    // 0x39bb3c: 0x10000098  b           . + 4 + (0x98 << 2)
    ctx->pc = 0x39BB3Cu;
    {
        const bool branch_taken_0x39bb3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x39BB40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39BB3Cu;
        // 0x39bb40: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39bb3c) {
            ctx->pc = 0x39BDA0u;
            goto label_39bda0;
        }
    }
    ctx->pc = 0x39BB44u;
    // 0x39bb44: 0x0  nop
    ctx->pc = 0x39bb44u;
    // NOP
label_39bb48:
    // 0x39bb48: 0xae20add8  sw          $zero, -0x5228($s1)
    ctx->pc = 0x39bb48u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4294946264), GPR_U32(ctx, 0));
    // 0x39bb4c: 0x92430001  lbu         $v1, 0x1($s2)
    ctx->pc = 0x39bb4cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1)));
    // 0x39bb50: 0x2462fffd  addiu       $v0, $v1, -0x3
    ctx->pc = 0x39bb50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967293));
    // 0x39bb54: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x39bb54u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x39bb58: 0x10400061  beqz        $v0, . + 4 + (0x61 << 2)
    ctx->pc = 0x39BB58u;
    {
        const bool branch_taken_0x39bb58 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x39BB5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39BB58u;
        // 0x39bb5c: 0x31600  sll         $v0, $v1, 24 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39bb58) {
            ctx->pc = 0x39BCE0u;
            goto label_39bce0;
        }
    }
    ctx->pc = 0x39BB60u;
    // 0x39bb60: 0x82420072  lb          $v0, 0x72($s2)
    ctx->pc = 0x39bb60u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 114)));
    // 0x39bb64: 0x5440000c  bnel        $v0, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x39BB64u;
    {
        const bool branch_taken_0x39bb64 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x39bb64) {
            ctx->pc = 0x39BB68u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x39BB64u;
            // 0x39bb68: 0x8e42009c  lw          $v0, 0x9C($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 156)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x39BB98u;
            goto label_39bb98;
        }
    }
    ctx->pc = 0x39BB6Cu;
    // 0x39bb6c: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x39bb6cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x39bb70: 0x8e4400a0  lw          $a0, 0xA0($s2)
    ctx->pc = 0x39bb70u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 160)));
    // 0x39bb74: 0x8c430c20  lw          $v1, 0xC20($v0)
    ctx->pc = 0x39bb74u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x400C20u));
    // 0x39bb78: 0x8e45009c  lw          $a1, 0x9C($s2)
    ctx->pc = 0x39bb78u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 156)));
    // 0x39bb7c: 0x641823  subu        $v1, $v1, $a0
    ctx->pc = 0x39bb7cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x39bb80: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x39bb80u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x39bb84: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x39bb84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x39bb88: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x39bb88u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x39bb8c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x39bb8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x39bb90: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x39bb90u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x39bb94: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x39bb94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_39bb98:
    // 0x39bb98: 0xae620000  sw          $v0, 0x0($s3)
    ctx->pc = 0x39bb98u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
    // 0x39bb9c: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x39bb9cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39bba0: 0x27a60004  addiu       $a2, $sp, 0x4
    ctx->pc = 0x39bba0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
    // 0x39bba4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x39bba4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39bba8: 0xc0e6e60  jal         func_39B980
    ctx->pc = 0x39BBA8u;
    SET_GPR_U32(ctx, 31, 0x39BBB0u);
    ctx->pc = 0x39BBACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39BBA8u;
    // 0x39bbac: 0x3c160041  lui         $s6, 0x41 (Delay Slot)
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)65 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x39B980u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39B980u, 0x39BBA8u, 0x39BBB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39BBB0u;
label_39bbb0:
    // 0x39bbb0: 0xc6610000  lwc1        $f1, 0x0($s3)
    ctx->pc = 0x39bbb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x39bbb4: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x39bbb4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x39bbb8: 0x26d4add4  addiu       $s4, $s6, -0x522C
    ctx->pc = 0x39bbb8u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 22), 4294946260));
    // 0x39bbbc: 0x8fa50000  lw          $a1, 0x0($sp)
    ctx->pc = 0x39bbbcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x39bbc0: 0x8fa60004  lw          $a2, 0x4($sp)
    ctx->pc = 0x39bbc0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x39bbc4: 0x8e870000  lw          $a3, 0x0($s4)
    ctx->pc = 0x39bbc4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x39bbc8: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x39bbc8u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x39bbcc: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x39bbccu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x39bbd0: 0x44861800  mtc1        $a2, $f3
    ctx->pc = 0x39bbd0u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x39bbd4: 0x468018e0  cvt.s.w     $f3, $f3
    ctx->pc = 0x39bbd4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[3], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
    // 0x39bbd8: 0x3c01447a  lui         $at, 0x447A
    ctx->pc = 0x39bbd8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17530 << 16));
    // 0x39bbdc: 0x44812800  mtc1        $at, $f5
    ctx->pc = 0x39bbdcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
    // 0x39bbe0: 0x44871000  mtc1        $a3, $f2
    ctx->pc = 0x39bbe0u;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x39bbe4: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x39bbe4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x39bbe8: 0x3c014270  lui         $at, 0x4270
    ctx->pc = 0x39bbe8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17008 << 16));
    // 0x39bbec: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x39bbecu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x39bbf0: 0x0  nop
    ctx->pc = 0x39bbf0u;
    // NOP
    // 0x39bbf4: 0x0  nop
    ctx->pc = 0x39bbf4u;
    // NOP
    // 0x39bbf8: 0x46030003  div.s       $f0, $f0, $f3
    ctx->pc = 0x39bbf8u;
    { if (ctx->f[3] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[3]); }
    // 0x39bbfc: 0x0  nop
    ctx->pc = 0x39bbfcu;
    // NOP
    // 0x39bc00: 0x0  nop
    ctx->pc = 0x39bc00u;
    // NOP
    // 0x39bc04: 0x46020843  div.s       $f1, $f1, $f2
    ctx->pc = 0x39bc04u;
    { if (ctx->f[2] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[1], ctx->f[2]); }
    // 0x39bc08: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x39bc08u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x39bc0c: 0x46050042  mul.s       $f1, $f0, $f5
    ctx->pc = 0x39bc0cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[5]);
    // 0x39bc10: 0x46012034  c.lt.s      $f4, $f1
    ctx->pc = 0x39bc10u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[4], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x39bc14: 0x45010006  bc1t        . + 4 + (0x6 << 2)
    ctx->pc = 0x39BC14u;
    {
        const bool branch_taken_0x39bc14 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x39BC18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39BC14u;
        // 0x39bc18: 0xe621add8  swc1        $f1, -0x5228($s1) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4294946264), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x39bc14) {
            ctx->pc = 0x39BC30u;
            goto label_39bc30;
        }
    }
    ctx->pc = 0x39BC1Cu;
    // 0x39bc1c: 0x3c01c270  lui         $at, 0xC270
    ctx->pc = 0x39bc1cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49776 << 16));
    // 0x39bc20: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x39bc20u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x39bc24: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x39bc24u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x39bc28: 0x45020057  bc1fl       . + 4 + (0x57 << 2)
    ctx->pc = 0x39BC28u;
    {
        const bool branch_taken_0x39bc28 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x39bc28) {
            ctx->pc = 0x39BC2Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x39BC28u;
            // 0x39bc2c: 0x8e420088  lw          $v0, 0x88($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 136)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x39BD88u;
            goto label_39bd88;
        }
    }
    ctx->pc = 0x39BC30u;
label_39bc30:
    // 0x39bc30: 0x3c020041  lui         $v0, 0x41
    ctx->pc = 0x39bc30u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65 << 16));
    // 0x39bc34: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x39bc34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x39bc38: 0x8c43adac  lw          $v1, -0x5254($v0)
    ctx->pc = 0x39bc38u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x40ADACu));
    // 0x39bc3c: 0x1464000c  bne         $v1, $a0, . + 4 + (0xC << 2)
    ctx->pc = 0x39BC3Cu;
    {
        const bool branch_taken_0x39bc3c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x39BC40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39BC3Cu;
        // 0x39bc40: 0x2610ad88  addiu       $s0, $s0, -0x5278 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294946184));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39bc3c) {
            ctx->pc = 0x39BC70u;
            goto label_39bc70;
        }
    }
    ctx->pc = 0x39BC44u;
    // 0x39bc44: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x39bc44u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39bc48: 0x8e110000  lw          $s1, 0x0($s0)
    ctx->pc = 0x39bc48u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x39bc4c: 0x27a60004  addiu       $a2, $sp, 0x4
    ctx->pc = 0x39bc4cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
    // 0x39bc50: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x39bc50u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    // 0x39bc54: 0xc0e6eb4  jal         func_39BAD0
    ctx->pc = 0x39BC54u;
    SET_GPR_U32(ctx, 31, 0x39BC5Cu);
    ctx->pc = 0x39BC58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39BC54u;
    // 0x39bc58: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x39BAD0u;
    goto label_39bad0;
    ctx->pc = 0x39BC5Cu;
label_39bc5c:
    // 0x39bc5c: 0xc0e6eac  jal         func_39BAB0
    ctx->pc = 0x39BC5Cu;
    SET_GPR_U32(ctx, 31, 0x39BC64u);
    ctx->pc = 0x39BC60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39BC5Cu;
    // 0x39bc60: 0xae110000  sw          $s1, 0x0($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 17));
    ctx->in_delay_slot = false;
    ctx->pc = 0x39BAB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39BAB0u, 0x39BC5Cu, 0x39BC64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39BC64u;
label_39bc64:
    // 0x39bc64: 0x8e870000  lw          $a3, 0x0($s4)
    ctx->pc = 0x39bc64u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x39bc68: 0x8fa50000  lw          $a1, 0x0($sp)
    ctx->pc = 0x39bc68u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x39bc6c: 0x8fa60004  lw          $a2, 0x4($sp)
    ctx->pc = 0x39bc6cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_39bc70:
    // 0x39bc70: 0x44860800  mtc1        $a2, $f1
    ctx->pc = 0x39bc70u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x39bc74: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x39bc74u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x39bc78: 0x3c014f00  lui         $at, 0x4F00
    ctx->pc = 0x39bc78u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)20224 << 16));
    // 0x39bc7c: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x39bc7cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x39bc80: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x39bc80u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x39bc84: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x39bc84u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x39bc88: 0x44871000  mtc1        $a3, $f2
    ctx->pc = 0x39bc88u;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x39bc8c: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x39bc8cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x39bc90: 0x0  nop
    ctx->pc = 0x39bc90u;
    // NOP
    // 0x39bc94: 0x0  nop
    ctx->pc = 0x39bc94u;
    // NOP
    // 0x39bc98: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x39bc98u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x39bc9c: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x39bc9cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x39bca0: 0x46001836  c.le.s      $f3, $f0
    ctx->pc = 0x39bca0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[3], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x39bca4: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x39bca4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x39bca8: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x39bca8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x39bcac: 0x45020007  bc1fl       . + 4 + (0x7 << 2)
    ctx->pc = 0x39BCACu;
    {
        const bool branch_taken_0x39bcac = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x39bcac) {
            ctx->pc = 0x39BCB0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x39BCACu;
            // 0x39bcb0: 0xae43009c  sw          $v1, 0x9C($s2) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 18), 156), GPR_U32(ctx, 3));
            ctx->in_delay_slot = false;
            ctx->pc = 0x39BCCCu;
            goto label_39bccc;
        }
    }
    ctx->pc = 0x39BCB4u;
    // 0x39bcb4: 0x46030001  sub.s       $f0, $f0, $f3
    ctx->pc = 0x39bcb4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[3]);
    // 0x39bcb8: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x39bcb8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x39bcbc: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x39bcbcu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x39bcc0: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x39bcc0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x39bcc4: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x39bcc4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x39bcc8: 0xae43009c  sw          $v1, 0x9C($s2)
    ctx->pc = 0x39bcc8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 156), GPR_U32(ctx, 3));
label_39bccc:
    // 0x39bccc: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x39bcccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
    // 0x39bcd0: 0x8c620c20  lw          $v0, 0xC20($v1)
    ctx->pc = 0x39bcd0u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x400C20u));
    // 0x39bcd4: 0x1000002b  b           . + 4 + (0x2B << 2)
    ctx->pc = 0x39BCD4u;
    {
        const bool branch_taken_0x39bcd4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x39BCD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39BCD4u;
        // 0x39bcd8: 0xae4200a0  sw          $v0, 0xA0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 160), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39bcd4) {
            ctx->pc = 0x39BD84u;
            goto label_39bd84;
        }
    }
    ctx->pc = 0x39BCDCu;
    // 0x39bcdc: 0x0  nop
    ctx->pc = 0x39bcdcu;
    // NOP
label_39bce0:
    // 0x39bce0: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x39bce0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x39bce4: 0x21603  sra         $v0, $v0, 24
    ctx->pc = 0x39bce4u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 24));
    // 0x39bce8: 0x54430025  bnel        $v0, $v1, . + 4 + (0x25 << 2)
    ctx->pc = 0x39BCE8u;
    {
        const bool branch_taken_0x39bce8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x39bce8) {
            ctx->pc = 0x39BCECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x39BCE8u;
            // 0x39bcec: 0xae600000  sw          $zero, 0x0($s3) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x39BD80u;
            goto label_39bd80;
        }
    }
    ctx->pc = 0x39BCF0u;
    // 0x39bcf0: 0x8e440004  lw          $a0, 0x4($s2)
    ctx->pc = 0x39bcf0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x39bcf4: 0xc0e646a  jal         func_3991A8
    ctx->pc = 0x39BCF4u;
    SET_GPR_U32(ctx, 31, 0x39BCFCu);
    ctx->pc = 0x39BCF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39BCF4u;
    // 0x39bcf8: 0x3c160041  lui         $s6, 0x41 (Delay Slot)
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)65 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3991A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3991A8u, 0x39BCF4u, 0x39BCFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39BCFCu;
label_39bcfc:
    // 0x39bcfc: 0x8e440004  lw          $a0, 0x4($s2)
    ctx->pc = 0x39bcfcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x39bd00: 0xc0e6452  jal         func_399148
    ctx->pc = 0x39BD00u;
    SET_GPR_U32(ctx, 31, 0x39BD08u);
    ctx->pc = 0x39BD04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39BD00u;
    // 0x39bd04: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x399148u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x399148u, 0x39BD00u, 0x39BD08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39BD08u;
label_39bd08:
    // 0x39bd08: 0x8e440004  lw          $a0, 0x4($s2)
    ctx->pc = 0x39bd08u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x39bd0c: 0xc0e645e  jal         func_399178
    ctx->pc = 0x39BD0Cu;
    SET_GPR_U32(ctx, 31, 0x39BD14u);
    ctx->pc = 0x39BD10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39BD0Cu;
    // 0x39bd10: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x399178u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x399178u, 0x39BD0Cu, 0x39BD14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39BD14u;
label_39bd14:
    // 0x39bd14: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x39bd14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x39bd18: 0x62001a  div         $zero, $v1, $v0
    ctx->pc = 0x39bd18u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x39bd1c: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x39BD1Cu;
    {
        const bool branch_taken_0x39bd1c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x39bd1c) {
            ctx->pc = 0x39BD20u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x39BD1Cu;
            // 0x39bd20: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x39BD24u;
            goto label_39bd24;
        }
    }
    ctx->pc = 0x39BD24u;
label_39bd24:
    // 0x39bd24: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x39bd24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x39bd28: 0xc7a20004  lwc1        $f2, 0x4($sp)
    ctx->pc = 0x39bd28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x39bd2c: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x39bd2cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x39bd30: 0xc6c1add4  lwc1        $f1, -0x522C($s6)
    ctx->pc = 0x39bd30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 4294946260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x39bd34: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x39bd34u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x39bd38: 0x1812  mflo        $v1
    ctx->pc = 0x39bd38u;
    SET_GPR_U64(ctx, 3, ctx->lo);
    // 0x39bd3c: 0x432818  mult        $a1, $v0, $v1
    ctx->pc = 0x39bd3cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x39bd40: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x39bd40u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x39bd44: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x39bd44u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x39bd48: 0xafa50000  sw          $a1, 0x0($sp)
    ctx->pc = 0x39bd48u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 5));
    // 0x39bd4c: 0x0  nop
    ctx->pc = 0x39bd4cu;
    // NOP
    // 0x39bd50: 0x0  nop
    ctx->pc = 0x39bd50u;
    // NOP
    // 0x39bd54: 0x46020003  div.s       $f0, $f0, $f2
    ctx->pc = 0x39bd54u;
    { if (ctx->f[2] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[2]); }
    // 0x39bd58: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x39bd58u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x39bd5c: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x39bd5cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x39bd60: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x39bd60u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x39bd64: 0xae630000  sw          $v1, 0x0($s3)
    ctx->pc = 0x39bd64u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 3));
    // 0x39bd68: 0x8e42009c  lw          $v0, 0x9C($s2)
    ctx->pc = 0x39bd68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 156)));
    // 0x39bd6c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x39bd6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x39bd70: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x39bd70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x39bd74: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x39BD74u;
    {
        const bool branch_taken_0x39bd74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x39BD78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39BD74u;
        // 0x39bd78: 0xae630000  sw          $v1, 0x0($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39bd74) {
            ctx->pc = 0x39BD84u;
            goto label_39bd84;
        }
    }
    ctx->pc = 0x39BD7Cu;
    // 0x39bd7c: 0x0  nop
    ctx->pc = 0x39bd7cu;
    // NOP
label_39bd80:
    // 0x39bd80: 0x3c160041  lui         $s6, 0x41
    ctx->pc = 0x39bd80u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)65 << 16));
label_39bd84:
    // 0x39bd84: 0x8e420088  lw          $v0, 0x88($s2)
    ctx->pc = 0x39bd84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 136)));
label_39bd88:
    // 0x39bd88: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x39bd88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x39bd8c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x39bd8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x39bd90: 0xae630000  sw          $v1, 0x0($s3)
    ctx->pc = 0x39bd90u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 3));
    // 0x39bd94: 0x8ec2add4  lw          $v0, -0x522C($s6)
    ctx->pc = 0x39bd94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4294946260)));
    // 0x39bd98: 0xaea20000  sw          $v0, 0x0($s5)
    ctx->pc = 0x39bd98u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 2));
    // 0x39bd9c: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x39bd9cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_39bda0:
    // 0x39bda0: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x39bda0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x39bda4: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x39bda4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x39bda8: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x39bda8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x39bdac: 0xdfb40030  ld          $s4, 0x30($sp)
    ctx->pc = 0x39bdacu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x39bdb0: 0xdfb50038  ld          $s5, 0x38($sp)
    ctx->pc = 0x39bdb0u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x39bdb4: 0xdfb60040  ld          $s6, 0x40($sp)
    ctx->pc = 0x39bdb4u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x39bdb8: 0xdfbf0048  ld          $ra, 0x48($sp)
    ctx->pc = 0x39bdb8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x39bdbc: 0x3e00008  jr          $ra
    ctx->pc = 0x39BDBCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x39BDC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39BDBCu;
        // 0x39bdc0: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x39BDBCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x39BDC4u;
    // 0x39bdc4: 0x0  nop
    ctx->pc = 0x39bdc4u;
    // NOP
    ctx->pc = 0x39bdc8u;
}
