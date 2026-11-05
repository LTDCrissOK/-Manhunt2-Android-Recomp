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

// Function: sub_00195608
// Address: 0x195608 - 0x1957d8
void sub_00195608_0x195608(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00195608_0x195608");
#endif

    switch (ctx->pc) {
        case 0x195680u: goto label_195680;
        case 0x195728u: goto label_195728;
        case 0x195730u: goto label_195730;
        case 0x195778u: goto label_195778;
        case 0x1957a0u: goto label_1957a0;
        default: break;
    }

    ctx->pc = 0x195608u;

    // 0x195608: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x195608u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x19560c: 0x3c020049  lui         $v0, 0x49
    ctx->pc = 0x19560cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)73 << 16));
    // 0x195610: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x195610u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x195614: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x195614u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x195618: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x195618u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x19561c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x19561cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x195620: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x195620u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x195624: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x195624u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x195628: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x195628u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x19562c: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x19562cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x195630: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x195630u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x195634: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x195634u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x195638: 0xac40efc0  sw          $zero, -0x1040($v0)
    ctx->pc = 0x195638u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x48EFC0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x48EFC0u, _value); } while (0);
    // 0x19563c: 0x8e2200ac  lw          $v0, 0xAC($s1)
    ctx->pc = 0x19563cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 172)));
    // 0x195640: 0x1040002f  beqz        $v0, . + 4 + (0x2F << 2)
    ctx->pc = 0x195640u;
    {
        const bool branch_taken_0x195640 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x195644u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195640u;
        // 0x195644: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x195640) {
            ctx->pc = 0x195700u;
            goto label_195700;
        }
    }
    ctx->pc = 0x195648u;
    // 0x195648: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x195648u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x19564c: 0x3c030049  lui         $v1, 0x49
    ctx->pc = 0x19564cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)73 << 16));
    // 0x195650: 0x8c472b00  lw          $a3, 0x2B00($v0)
    ctx->pc = 0x195650u;
    SET_GPR_S32(ctx, 7, (int32_t)FAST_READ32(0x482B00u));
    // 0x195654: 0x246def80  addiu       $t5, $v1, -0x1080
    ctx->pc = 0x195654u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 3), 4294963072));
    // 0x195658: 0x3c020049  lui         $v0, 0x49
    ctx->pc = 0x195658u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)73 << 16));
    // 0x19565c: 0x3c013a83  lui         $at, 0x3A83
    ctx->pc = 0x19565cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14979 << 16));
    // 0x195660: 0x3421126f  ori         $at, $at, 0x126F
    ctx->pc = 0x195660u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4719);
    // 0x195664: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x195664u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x195668: 0x71842  srl         $v1, $a3, 1
    ctx->pc = 0x195668u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 7), 1));
    // 0x19566c: 0x30e80001  andi        $t0, $a3, 0x1
    ctx->pc = 0x19566cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)1);
    // 0x195670: 0x244cefa0  addiu       $t4, $v0, -0x1060
    ctx->pc = 0x195670u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 2), 4294963104));
    // 0x195674: 0x2a0502d  daddu       $t2, $s5, $zero
    ctx->pc = 0x195674u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x195678: 0x1034025  or          $t0, $t0, $v1
    ctx->pc = 0x195678u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 3));
    // 0x19567c: 0x2626006c  addiu       $a2, $s1, 0x6C
    ctx->pc = 0x19567cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 108));
label_195680:
    // 0x195680: 0x4e00006  bltz        $a3, . + 4 + (0x6 << 2)
    ctx->pc = 0x195680u;
    {
        const bool branch_taken_0x195680 = (GPR_S32(ctx, 7) < 0);
        if (branch_taken_0x195680) {
            ctx->pc = 0x19569Cu;
            goto label_19569c;
        }
    }
    ctx->pc = 0x195688u;
    // 0x195688: 0x44870000  mtc1        $a3, $f0
    ctx->pc = 0x195688u;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x19568c: 0x0  nop
    ctx->pc = 0x19568cu;
    // NOP
    // 0x195690: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x195690u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x195694: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x195694u;
    {
        const bool branch_taken_0x195694 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x195698u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195694u;
        // 0x195698: 0x46020002  mul.s       $f0, $f0, $f2 (Delay Slot)
        ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x195694) {
            ctx->pc = 0x1956B0u;
            goto label_1956b0;
        }
    }
    ctx->pc = 0x19569Cu;
label_19569c:
    // 0x19569c: 0x44880000  mtc1        $t0, $f0
    ctx->pc = 0x19569cu;
    { uint32_t bits = GPR_U32(ctx, 8); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1956a0: 0x0  nop
    ctx->pc = 0x1956a0u;
    // NOP
    // 0x1956a4: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1956a4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1956a8: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x1956a8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
    // 0x1956ac: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x1956acu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
label_1956b0:
    // 0x1956b0: 0xc4c10020  lwc1        $f1, 0x20($a2)
    ctx->pc = 0x1956b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1956b4: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x1956b4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1956b8: 0x0  nop
    ctx->pc = 0x1956b8u;
    // NOP
    // 0x1956bc: 0x4500000a  bc1f        . + 4 + (0xA << 2)
    ctx->pc = 0x1956BCu;
    {
        const bool branch_taken_0x1956bc = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1956C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1956BCu;
        // 0x1956c0: 0x8d42efc0  lw          $v0, -0x1040($t2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 4294963136)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1956bc) {
            ctx->pc = 0x1956E8u;
            goto label_1956e8;
        }
    }
    ctx->pc = 0x1956C4u;
    // 0x1956c4: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x1956c4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1956c8: 0x6d2021  addu        $a0, $v1, $t5
    ctx->pc = 0x1956c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 13)));
    // 0x1956cc: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1956ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1956d0: 0xe4810000  swc1        $f1, 0x0($a0)
    ctx->pc = 0x1956d0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x1956d4: 0x6c1821  addu        $v1, $v1, $t4
    ctx->pc = 0x1956d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 12)));
    // 0x1956d8: 0x8cc50000  lw          $a1, 0x0($a2)
    ctx->pc = 0x1956d8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1956dc: 0xad42efc0  sw          $v0, -0x1040($t2)
    ctx->pc = 0x1956dcu;
    WRITE32(ADD32(GPR_U32(ctx, 10), 4294963136), GPR_U32(ctx, 2));
    // 0x1956e0: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1956E0u;
    {
        const bool branch_taken_0x1956e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1956E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1956E0u;
        // 0x1956e4: 0xac650000  sw          $a1, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1956e0) {
            ctx->pc = 0x1956ECu;
            goto label_1956ec;
        }
    }
    ctx->pc = 0x1956E8u;
label_1956e8:
    // 0x1956e8: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x1956e8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1956ec:
    // 0x1956ec: 0x8e2200ac  lw          $v0, 0xAC($s1)
    ctx->pc = 0x1956ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 172)));
    // 0x1956f0: 0x256b0001  addiu       $t3, $t3, 0x1
    ctx->pc = 0x1956f0u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 1));
    // 0x1956f4: 0x162102b  sltu        $v0, $t3, $v0
    ctx->pc = 0x1956f4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 11) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1956f8: 0x1440ffe1  bnez        $v0, . + 4 + (-0x1F << 2)
    ctx->pc = 0x1956F8u;
    {
        const bool branch_taken_0x1956f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1956FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1956F8u;
        // 0x1956fc: 0x24c60004  addiu       $a2, $a2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1956f8) {
            ctx->pc = 0x195680u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_195680;
        }
    }
    ctx->pc = 0x195700u;
label_195700:
    // 0x195700: 0x1120002b  beqz        $t1, . + 4 + (0x2B << 2)
    ctx->pc = 0x195700u;
    {
        const bool branch_taken_0x195700 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 0));
        ctx->pc = 0x195704u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195700u;
        // 0x195704: 0x8ea3efc0  lw          $v1, -0x1040($s5) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294963136)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x195700) {
            ctx->pc = 0x1957B0u;
            goto label_1957b0;
        }
    }
    ctx->pc = 0x195708u;
    // 0x195708: 0x2630005c  addiu       $s0, $s1, 0x5C
    ctx->pc = 0x195708u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 92));
    // 0x19570c: 0x200a02d  daddu       $s4, $s0, $zero
    ctx->pc = 0x19570cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x195710: 0xae2300ac  sw          $v1, 0xAC($s1)
    ctx->pc = 0x195710u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 172), GPR_U32(ctx, 3));
    // 0x195714: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x195714u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x195718: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x195718u;
    {
        const bool branch_taken_0x195718 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x19571Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195718u;
        // 0x19571c: 0xae02000c  sw          $v0, 0xC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x195718) {
            ctx->pc = 0x195740u;
            goto label_195740;
        }
    }
    ctx->pc = 0x195720u;
    // 0x195720: 0x8e050004  lw          $a1, 0x4($s0)
    ctx->pc = 0x195720u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x195724: 0x0  nop
    ctx->pc = 0x195724u;
    // NOP
label_195728:
    // 0x195728: 0xc0f61e8  jal         func_3D87A0
    ctx->pc = 0x195728u;
    SET_GPR_U32(ctx, 31, 0x195730u);
    ctx->pc = 0x19572Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x195728u;
    // 0x19572c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D87A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D87A0u, 0x195728u, 0x195730u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x195730u;
label_195730:
    // 0x195730: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x195730u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x195734: 0x0  nop
    ctx->pc = 0x195734u;
    // NOP
    // 0x195738: 0x5440fffb  bnel        $v0, $zero, . + 4 + (-0x5 << 2)
    ctx->pc = 0x195738u;
    {
        const bool branch_taken_0x195738 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x195738) {
            ctx->pc = 0x19573Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x195738u;
            // 0x19573c: 0x8e050004  lw          $a1, 0x4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x195728u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_195728;
        }
    }
    ctx->pc = 0x195740u;
label_195740:
    // 0x195740: 0xae00000c  sw          $zero, 0xC($s0)
    ctx->pc = 0x195740u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
    // 0x195744: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x195744u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    // 0x195748: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x195748u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    // 0x19574c: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x19574cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
    // 0x195750: 0x8ea2efc0  lw          $v0, -0x1040($s5)
    ctx->pc = 0x195750u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294963136)));
    // 0x195754: 0x10400016  beqz        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x195754u;
    {
        const bool branch_taken_0x195754 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x195758u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195754u;
        // 0x195758: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x195754) {
            ctx->pc = 0x1957B0u;
            goto label_1957b0;
        }
    }
    ctx->pc = 0x19575Cu;
    // 0x19575c: 0x3c030049  lui         $v1, 0x49
    ctx->pc = 0x19575cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)73 << 16));
    // 0x195760: 0x3c020049  lui         $v0, 0x49
    ctx->pc = 0x195760u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)73 << 16));
    // 0x195764: 0x2630006c  addiu       $s0, $s1, 0x6C
    ctx->pc = 0x195764u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 108));
    // 0x195768: 0x2473ef80  addiu       $s3, $v1, -0x1080
    ctx->pc = 0x195768u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 3), 4294963072));
    // 0x19576c: 0x2451efa0  addiu       $s1, $v0, -0x1060
    ctx->pc = 0x19576cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 4294963104));
    // 0x195770: 0xc6600000  lwc1        $f0, 0x0($s3)
    ctx->pc = 0x195770u;
    { uint32_t bits = FAST_READ32(0x48EF80u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x195774: 0x0  nop
    ctx->pc = 0x195774u;
    // NOP
label_195778:
    // 0x195778: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x195778u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19577c: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x19577cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x195780: 0x26730004  addiu       $s3, $s3, 0x4
    ctx->pc = 0x195780u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
    // 0x195784: 0xe6000020  swc1        $f0, 0x20($s0)
    ctx->pc = 0x195784u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 32), bits); }
    // 0x195788: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x195788u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x19578c: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x19578cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x195790: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x195790u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x195794: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x195794u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x195798: 0xc0f620c  jal         func_3D8830
    ctx->pc = 0x195798u;
    SET_GPR_U32(ctx, 31, 0x1957A0u);
    ctx->pc = 0x19579Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x195798u;
    // 0x19579c: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D8830u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D8830u, 0x195798u, 0x1957A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1957A0u;
label_1957a0:
    // 0x1957a0: 0x8ea3efc0  lw          $v1, -0x1040($s5)
    ctx->pc = 0x1957a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294963136)));
    // 0x1957a4: 0x243182b  sltu        $v1, $s2, $v1
    ctx->pc = 0x1957a4u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x1957a8: 0x5460fff3  bnel        $v1, $zero, . + 4 + (-0xD << 2)
    ctx->pc = 0x1957A8u;
    {
        const bool branch_taken_0x1957a8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1957a8) {
            ctx->pc = 0x1957ACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1957A8u;
            // 0x1957ac: 0xc6600000  lwc1        $f0, 0x0($s3) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x195778u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_195778;
        }
    }
    ctx->pc = 0x1957B0u;
label_1957b0:
    // 0x1957b0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1957b0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1957b4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1957b4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1957b8: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1957b8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1957bc: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1957bcu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1957c0: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x1957c0u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1957c4: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x1957c4u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1957c8: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1957c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1957cc: 0x3e00008  jr          $ra
    ctx->pc = 0x1957CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1957D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1957CCu;
        // 0x1957d0: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1957CCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1957D4u;
    // 0x1957d4: 0x0  nop
    ctx->pc = 0x1957d4u;
    // NOP
    ctx->pc = 0x1957d8u;
}
