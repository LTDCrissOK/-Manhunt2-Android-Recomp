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

// Function: sub_0036AA00
// Address: 0x36aa00 - 0x36abc0
void sub_0036AA00_0x36aa00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0036AA00_0x36aa00");
#endif

    switch (ctx->pc) {
        case 0x36aaa0u: goto label_36aaa0;
        case 0x36aac0u: goto label_36aac0;
        case 0x36ab50u: goto label_36ab50;
        case 0x36ab58u: goto label_36ab58;
        case 0x36ab68u: goto label_36ab68;
        case 0x36ab7cu: goto label_36ab7c;
        case 0x36ab84u: goto label_36ab84;
        case 0x36ab8cu: goto label_36ab8c;
        case 0x36aba0u: goto label_36aba0;
        default: break;
    }

    ctx->pc = 0x36aa00u;

    // 0x36aa00: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x36aa00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x36aa04: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x36aa04u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
    // 0x36aa08: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x36aa08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x36aa0c: 0x2465ca60  addiu       $a1, $v1, -0x35A0
    ctx->pc = 0x36aa0cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4294953568));
    // 0x36aa10: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x36aa10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
    // 0x36aa14: 0x3c04aaaa  lui         $a0, 0xAAAA
    ctx->pc = 0x36aa14u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)43690 << 16));
    // 0x36aa18: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x36aa18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x36aa1c: 0x60982d  daddu       $s3, $v1, $zero
    ctx->pc = 0x36aa1cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36aa20: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x36aa20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x36aa24: 0x3484aaab  ori         $a0, $a0, 0xAAAB
    ctx->pc = 0x36aa24u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)43691);
    // 0x36aa28: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x36aa28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x36aa2c: 0x8ca20018  lw          $v0, 0x18($a1)
    ctx->pc = 0x36aa2cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x6BCA78u));
    // 0x36aa30: 0x8ca30014  lw          $v1, 0x14($a1)
    ctx->pc = 0x36aa30u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x6BCA74u));
    // 0x36aa34: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x36aa34u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x36aa38: 0x441018  mult        $v0, $v0, $a0
    ctx->pc = 0x36aa38u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x36aa3c: 0x288c3  sra         $s1, $v0, 3
    ctx->pc = 0x36aa3cu;
    SET_GPR_S32(ctx, 17, SRA32(GPR_S32(ctx, 2), 3));
    // 0x36aa40: 0x12200057  beqz        $s1, . + 4 + (0x57 << 2)
    ctx->pc = 0x36AA40u;
    {
        const bool branch_taken_0x36aa40 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x36AA44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36AA40u;
        // 0x36aa44: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36aa40) {
            ctx->pc = 0x36ABA0u;
            goto label_36aba0;
        }
    }
    ctx->pc = 0x36AA48u;
    // 0x36aa48: 0x8ca3002c  lw          $v1, 0x2C($a1)
    ctx->pc = 0x36aa48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 44)));
    // 0x36aa4c: 0x1062000a  beq         $v1, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x36AA4Cu;
    {
        const bool branch_taken_0x36aa4c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x36AA50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36AA4Cu;
        // 0x36aa50: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x36aa4c) {
            ctx->pc = 0x36AA78u;
            goto label_36aa78;
        }
    }
    ctx->pc = 0x36AA54u;
    // 0x36aa54: 0x14400053  bnez        $v0, . + 4 + (0x53 << 2)
    ctx->pc = 0x36AA54u;
    {
        const bool branch_taken_0x36aa54 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x36AA58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36AA54u;
        // 0x36aa58: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36aa54) {
            ctx->pc = 0x36ABA4u;
            goto label_36aba4;
        }
    }
    ctx->pc = 0x36AA5Cu;
    // 0x36aa5c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x36aa5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x36aa60: 0x10620007  beq         $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x36AA60u;
    {
        const bool branch_taken_0x36aa60 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x36AA64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36AA60u;
        // 0x36aa64: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36aa60) {
            ctx->pc = 0x36AA80u;
            goto label_36aa80;
        }
    }
    ctx->pc = 0x36AA68u;
    // 0x36aa68: 0x10620006  beq         $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x36AA68u;
    {
        const bool branch_taken_0x36aa68 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x36AA6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36AA68u;
        // 0x36aa6c: 0x24120005  addiu       $s2, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36aa68) {
            ctx->pc = 0x36AA84u;
            goto label_36aa84;
        }
    }
    ctx->pc = 0x36AA70u;
    // 0x36aa70: 0x1000004d  b           . + 4 + (0x4D << 2)
    ctx->pc = 0x36AA70u;
    {
        const bool branch_taken_0x36aa70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x36AA74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36AA70u;
        // 0x36aa74: 0xdfb10018  ld          $s1, 0x18($sp) (Delay Slot)
        SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36aa70) {
            ctx->pc = 0x36ABA8u;
            goto label_36aba8;
        }
    }
    ctx->pc = 0x36AA78u;
label_36aa78:
    // 0x36aa78: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x36AA78u;
    {
        const bool branch_taken_0x36aa78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x36AA7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36AA78u;
        // 0x36aa7c: 0x24120003  addiu       $s2, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36aa78) {
            ctx->pc = 0x36AA84u;
            goto label_36aa84;
        }
    }
    ctx->pc = 0x36AA80u;
label_36aa80:
    // 0x36aa80: 0x24120004  addiu       $s2, $zero, 0x4
    ctx->pc = 0x36aa80u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_36aa84:
    // 0x36aa84: 0x24020018  addiu       $v0, $zero, 0x18
    ctx->pc = 0x36aa84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x36aa88: 0x2222018  mult        $a0, $s1, $v0
    ctx->pc = 0x36aa88u;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x36aa8c: 0x2c834001  sltiu       $v1, $a0, 0x4001
    ctx->pc = 0x36aa8cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)16385) ? 1 : 0);
    // 0x36aa90: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x36AA90u;
    {
        const bool branch_taken_0x36aa90 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x36AA94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36AA90u;
        // 0x36aa94: 0x3c107000  lui         $s0, 0x7000 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)28672 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36aa90) {
            ctx->pc = 0x36AAA4u;
            goto label_36aaa4;
        }
    }
    ctx->pc = 0x36AA98u;
    // 0x36aa98: 0xc0b241a  jal         func_2C9068
    ctx->pc = 0x36AA98u;
    SET_GPR_U32(ctx, 31, 0x36AAA0u);
    ctx->pc = 0x2C9068u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C9068u, 0x36AA98u, 0x36AAA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36AAA0u;
label_36aaa0:
    // 0x36aaa0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x36aaa0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_36aaa4:
    // 0x36aaa4: 0x2662ca60  addiu       $v0, $s3, -0x35A0
    ctx->pc = 0x36aaa4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 4294953568));
    // 0x36aaa8: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x36aaa8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36aaac: 0x8c460014  lw          $a2, 0x14($v0)
    ctx->pc = 0x36aaacu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x36aab0: 0x1220001f  beqz        $s1, . + 4 + (0x1F << 2)
    ctx->pc = 0x36AAB0u;
    {
        const bool branch_taken_0x36aab0 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x36AAB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36AAB0u;
        // 0x36aab4: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36aab0) {
            ctx->pc = 0x36AB30u;
            goto label_36ab30;
        }
    }
    ctx->pc = 0x36AAB8u;
    // 0x36aab8: 0x3c0a00ff  lui         $t2, 0xFF
    ctx->pc = 0x36aab8u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)255 << 16));
    // 0x36aabc: 0x3a0402d  daddu       $t0, $sp, $zero
    ctx->pc = 0x36aabcu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_36aac0:
    // 0x36aac0: 0x8cc40014  lw          $a0, 0x14($a2)
    ctx->pc = 0x36aac0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 20)));
    // 0x36aac4: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x36aac4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x36aac8: 0xc4c4000c  lwc1        $f4, 0xC($a2)
    ctx->pc = 0x36aac8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x36aacc: 0x131282b  sltu        $a1, $t1, $s1
    ctx->pc = 0x36aaccu;
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 9) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
    // 0x36aad0: 0xc4c20010  lwc1        $f2, 0x10($a2)
    ctx->pc = 0x36aad0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x36aad4: 0x3082ff00  andi        $v0, $a0, 0xFF00
    ctx->pc = 0x36aad4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65280);
    // 0x36aad8: 0xc4c30000  lwc1        $f3, 0x0($a2)
    ctx->pc = 0x36aad8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x36aadc: 0x8a1824  and         $v1, $a0, $t2
    ctx->pc = 0x36aadcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 10));
    // 0x36aae0: 0xc4c10004  lwc1        $f1, 0x4($a2)
    ctx->pc = 0x36aae0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x36aae4: 0x21202  srl         $v0, $v0, 8
    ctx->pc = 0x36aae4u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
    // 0x36aae8: 0xc4c00008  lwc1        $f0, 0x8($a2)
    ctx->pc = 0x36aae8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x36aaec: 0x31c02  srl         $v1, $v1, 16
    ctx->pc = 0x36aaecu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 16));
    // 0x36aaf0: 0xa3a40000  sb          $a0, 0x0($sp)
    ctx->pc = 0x36aaf0u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x36aaf4: 0x24c60018  addiu       $a2, $a2, 0x18
    ctx->pc = 0x36aaf4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 24));
    // 0x36aaf8: 0x42642  srl         $a0, $a0, 25
    ctx->pc = 0x36aaf8u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 4), 25));
    // 0x36aafc: 0xa1020001  sb          $v0, 0x1($t0)
    ctx->pc = 0x36aafcu;
    WRITE8(ADD32(GPR_U32(ctx, 8), 1), (uint8_t)GPR_U32(ctx, 2));
    // 0x36ab00: 0xa1030002  sb          $v1, 0x2($t0)
    ctx->pc = 0x36ab00u;
    WRITE8(ADD32(GPR_U32(ctx, 8), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x36ab04: 0xa1040003  sb          $a0, 0x3($t0)
    ctx->pc = 0x36ab04u;
    WRITE8(ADD32(GPR_U32(ctx, 8), 3), (uint8_t)GPR_U32(ctx, 4));
    // 0x36ab08: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x36ab08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x36ab0c: 0xe4e4000c  swc1        $f4, 0xC($a3)
    ctx->pc = 0x36ab0cu;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 12), bits); }
    // 0x36ab10: 0xe4e20010  swc1        $f2, 0x10($a3)
    ctx->pc = 0x36ab10u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 16), bits); }
    // 0x36ab14: 0xace20014  sw          $v0, 0x14($a3)
    ctx->pc = 0x36ab14u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 20), GPR_U32(ctx, 2));
    // 0x36ab18: 0xe4e30000  swc1        $f3, 0x0($a3)
    ctx->pc = 0x36ab18u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 0), bits); }
    // 0x36ab1c: 0xe4e10004  swc1        $f1, 0x4($a3)
    ctx->pc = 0x36ab1cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 4), bits); }
    // 0x36ab20: 0xe4e00008  swc1        $f0, 0x8($a3)
    ctx->pc = 0x36ab20u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 8), bits); }
    // 0x36ab24: 0x14a0ffe6  bnez        $a1, . + 4 + (-0x1A << 2)
    ctx->pc = 0x36AB24u;
    {
        const bool branch_taken_0x36ab24 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x36AB28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36AB24u;
        // 0x36ab28: 0x24e70018  addiu       $a3, $a3, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36ab24) {
            ctx->pc = 0x36AAC0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_36aac0;
        }
    }
    ctx->pc = 0x36AB2Cu;
    // 0x36ab2c: 0x2662ca60  addiu       $v0, $s3, -0x35A0
    ctx->pc = 0x36ab2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 4294953568));
label_36ab30:
    // 0x36ab30: 0x8c430020  lw          $v1, 0x20($v0)
    ctx->pc = 0x36ab30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x36ab34: 0x1060000a  beqz        $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x36AB34u;
    {
        const bool branch_taken_0x36ab34 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x36AB38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36AB34u;
        // 0x36ab38: 0x3c04005c  lui         $a0, 0x5C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)92 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36ab34) {
            ctx->pc = 0x36AB60u;
            goto label_36ab60;
        }
    }
    ctx->pc = 0x36AB3Cu;
    // 0x36ab3c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x36ab3cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x36ab40: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x36ab40u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x36ab44: 0x2484f8c8  addiu       $a0, $a0, -0x738
    ctx->pc = 0x36ab44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294965448));
    // 0x36ab48: 0xc0dc1ba  jal         func_3706E8
    ctx->pc = 0x36AB48u;
    SET_GPR_U32(ctx, 31, 0x36AB50u);
    ctx->pc = 0x36AB4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36AB48u;
    // 0x36ab4c: 0x46006346  mov.s       $f13, $f12 (Delay Slot)
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x3706E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3706E8u, 0x36AB48u, 0x36AB50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36AB50u;
label_36ab50:
    // 0x36ab50: 0xc0db386  jal         func_36CE18
    ctx->pc = 0x36AB50u;
    SET_GPR_U32(ctx, 31, 0x36AB58u);
    ctx->pc = 0x36AB54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36AB50u;
    // 0x36ab54: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x36CE18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36CE18u, 0x36AB50u, 0x36AB58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36AB58u;
label_36ab58:
    // 0x36ab58: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x36AB58u;
    {
        const bool branch_taken_0x36ab58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x36AB5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36AB58u;
        // 0x36ab5c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36ab58) {
            ctx->pc = 0x36AB6Cu;
            goto label_36ab6c;
        }
    }
    ctx->pc = 0x36AB60u;
label_36ab60:
    // 0x36ab60: 0xc0db386  jal         func_36CE18
    ctx->pc = 0x36AB60u;
    SET_GPR_U32(ctx, 31, 0x36AB68u);
    ctx->pc = 0x36AB64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36AB60u;
    // 0x36ab64: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x36CE18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36CE18u, 0x36AB60u, 0x36AB68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36AB68u;
label_36ab68:
    // 0x36ab68: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x36ab68u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_36ab6c:
    // 0x36ab6c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x36ab6cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36ab70: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x36ab70u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36ab74: 0xc0db7e6  jal         func_36DF98
    ctx->pc = 0x36AB74u;
    SET_GPR_U32(ctx, 31, 0x36AB7Cu);
    ctx->pc = 0x36AB78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36AB74u;
    // 0x36ab78: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x36DF98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36DF98u, 0x36AB74u, 0x36AB7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36AB7Cu;
label_36ab7c:
    // 0x36ab7c: 0xc0db878  jal         func_36E1E0
    ctx->pc = 0x36AB7Cu;
    SET_GPR_U32(ctx, 31, 0x36AB84u);
    ctx->pc = 0x36AB80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36AB7Cu;
    // 0x36ab80: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x36E1E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36E1E0u, 0x36AB7Cu, 0x36AB84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36AB84u;
label_36ab84:
    // 0x36ab84: 0xc0db83c  jal         func_36E0F0
    ctx->pc = 0x36AB84u;
    SET_GPR_U32(ctx, 31, 0x36AB8Cu);
    ctx->pc = 0x36E0F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36E0F0u, 0x36AB84u, 0x36AB8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36AB8Cu;
label_36ab8c:
    // 0x36ab8c: 0x3c037000  lui         $v1, 0x7000
    ctx->pc = 0x36ab8cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)28672 << 16));
    // 0x36ab90: 0x52030004  beql        $s0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x36AB90u;
    {
        const bool branch_taken_0x36ab90 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        if (branch_taken_0x36ab90) {
            ctx->pc = 0x36AB94u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x36AB90u;
            // 0x36ab94: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x36ABA4u;
            goto label_36aba4;
        }
    }
    ctx->pc = 0x36AB98u;
    // 0x36ab98: 0xc0b2524  jal         func_2C9490
    ctx->pc = 0x36AB98u;
    SET_GPR_U32(ctx, 31, 0x36ABA0u);
    ctx->pc = 0x36AB9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36AB98u;
    // 0x36ab9c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C9490u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C9490u, 0x36AB98u, 0x36ABA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36ABA0u;
label_36aba0:
    // 0x36aba0: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x36aba0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_36aba4:
    // 0x36aba4: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x36aba4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_36aba8:
    // 0x36aba8: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x36aba8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x36abac: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x36abacu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x36abb0: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x36abb0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x36abb4: 0x3e00008  jr          $ra
    ctx->pc = 0x36ABB4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x36ABB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36ABB4u;
        // 0x36abb8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36ABB4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x36ABBCu;
    // 0x36abbc: 0x0  nop
    ctx->pc = 0x36abbcu;
    // NOP
    ctx->pc = 0x36abc0u;
}
