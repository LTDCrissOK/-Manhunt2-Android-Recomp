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

// Function: sub_0015AF10
// Address: 0x15af10 - 0x15b0c8
void sub_0015AF10_0x15af10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0015AF10_0x15af10");
#endif

    switch (ctx->pc) {
        case 0x15af50u: goto label_15af50;
        case 0x15af6cu: goto label_15af6c;
        case 0x15af80u: goto label_15af80;
        case 0x15af8cu: goto label_15af8c;
        case 0x15b080u: goto label_15b080;
        case 0x15b088u: goto label_15b088;
        default: break;
    }

    ctx->pc = 0x15af10u;

    // 0x15af10: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x15af10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x15af14: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x15af14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x15af18: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x15af18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x15af1c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x15af1cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15af20: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x15af20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x15af24: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x15af24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x15af28: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x15af28u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15af2c: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x15af2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x15af30: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x15af30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x15af34: 0x92220a20  lbu         $v0, 0xA20($s1)
    ctx->pc = 0x15af34u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 2592)));
    // 0x15af38: 0x262102b  sltu        $v0, $s3, $v0
    ctx->pc = 0x15af38u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x15af3c: 0x1040004a  beqz        $v0, . + 4 + (0x4A << 2)
    ctx->pc = 0x15AF3Cu;
    {
        const bool branch_taken_0x15af3c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x15AF40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15AF3Cu;
        // 0x15af40: 0x260902d  daddu       $s2, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15af3c) {
            ctx->pc = 0x15B068u;
            goto label_15b068;
        }
    }
    ctx->pc = 0x15AF44u;
    // 0x15af44: 0x24140070  addiu       $s4, $zero, 0x70
    ctx->pc = 0x15af44u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 112));
    // 0x15af48: 0x2541818  mult        $v1, $s2, $s4
    ctx->pc = 0x15af48u;
    { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 20); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x15af4c: 0x0  nop
    ctx->pc = 0x15af4cu;
    // NOP
label_15af50:
    // 0x15af50: 0x711021  addu        $v0, $v1, $s1
    ctx->pc = 0x15af50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x15af54: 0x8c430330  lw          $v1, 0x330($v0)
    ctx->pc = 0x15af54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 816)));
    // 0x15af58: 0x1460000e  bnez        $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x15AF58u;
    {
        const bool branch_taken_0x15af58 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x15AF5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15AF58u;
        // 0x15af5c: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15af58) {
            ctx->pc = 0x15AF94u;
            goto label_15af94;
        }
    }
    ctx->pc = 0x15AF60u;
    // 0x15af60: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x15af60u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15af64: 0xc056ee4  jal         func_15BB90
    ctx->pc = 0x15AF64u;
    SET_GPR_U32(ctx, 31, 0x15AF6Cu);
    ctx->pc = 0x15AF68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15AF64u;
    // 0x15af68: 0x8e050320  lw          $a1, 0x320($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 800)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15BB90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15BB90u, 0x15AF64u, 0x15AF6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15AF6Cu;
label_15af6c:
    // 0x15af6c: 0x8e10032c  lw          $s0, 0x32C($s0)
    ctx->pc = 0x15af6cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 812)));
    // 0x15af70: 0x12000037  beqz        $s0, . + 4 + (0x37 << 2)
    ctx->pc = 0x15AF70u;
    {
        const bool branch_taken_0x15af70 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x15AF74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15AF70u;
        // 0x15af74: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15af70) {
            ctx->pc = 0x15B050u;
            goto label_15b050;
        }
    }
    ctx->pc = 0x15AF78u;
    // 0x15af78: 0xc04f1b6  jal         func_13C6D8
    ctx->pc = 0x15AF78u;
    SET_GPR_U32(ctx, 31, 0x15AF80u);
    ctx->pc = 0x15AF7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15AF78u;
    // 0x15af7c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13C6D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13C6D8u, 0x15AF78u, 0x15AF80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15AF80u;
label_15af80:
    // 0x15af80: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x15af80u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15af84: 0xc04f42e  jal         func_13D0B8
    ctx->pc = 0x15AF84u;
    SET_GPR_U32(ctx, 31, 0x15AF8Cu);
    ctx->pc = 0x15AF88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15AF84u;
    // 0x15af88: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13D0B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13D0B8u, 0x15AF84u, 0x15AF8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15AF8Cu;
label_15af8c:
    // 0x15af8c: 0x10000031  b           . + 4 + (0x31 << 2)
    ctx->pc = 0x15AF8Cu;
    {
        const bool branch_taken_0x15af8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15AF90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15AF8Cu;
        // 0x15af90: 0x26430001  addiu       $v1, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15af8c) {
            ctx->pc = 0x15B054u;
            goto label_15b054;
        }
    }
    ctx->pc = 0x15AF94u;
label_15af94:
    // 0x15af94: 0x1253002c  beq         $s2, $s3, . + 4 + (0x2C << 2)
    ctx->pc = 0x15AF94u;
    {
        const bool branch_taken_0x15af94 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 19));
        ctx->pc = 0x15AF98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15AF94u;
        // 0x15af98: 0x2541018  mult        $v0, $s2, $s4 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 20); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x15af94) {
            ctx->pc = 0x15B048u;
            goto label_15b048;
        }
    }
    ctx->pc = 0x15AF9Cu;
    // 0x15af9c: 0x512021  addu        $a0, $v0, $s1
    ctx->pc = 0x15af9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x15afa0: 0x2741018  mult        $v0, $s3, $s4
    ctx->pc = 0x15afa0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 19) * (int64_t)GPR_S32(ctx, 20); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x15afa4: 0x24840320  addiu       $a0, $a0, 0x320
    ctx->pc = 0x15afa4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 800));
    // 0x15afa8: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x15afa8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x15afac: 0x24860030  addiu       $a2, $a0, 0x30
    ctx->pc = 0x15afacu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 48));
    // 0x15afb0: 0x512821  addu        $a1, $v0, $s1
    ctx->pc = 0x15afb0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x15afb4: 0x24a50320  addiu       $a1, $a1, 0x320
    ctx->pc = 0x15afb4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 800));
    // 0x15afb8: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x15afb8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x15afbc: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x15afbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x15afc0: 0xaca20004  sw          $v0, 0x4($a1)
    ctx->pc = 0x15afc0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 2));
    // 0x15afc4: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x15afc4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x15afc8: 0xaca30008  sw          $v1, 0x8($a1)
    ctx->pc = 0x15afc8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 3));
    // 0x15afcc: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x15afccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x15afd0: 0xaca2000c  sw          $v0, 0xC($a1)
    ctx->pc = 0x15afd0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 2));
    // 0x15afd4: 0x8c830010  lw          $v1, 0x10($a0)
    ctx->pc = 0x15afd4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x15afd8: 0xaca30010  sw          $v1, 0x10($a1)
    ctx->pc = 0x15afd8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 16), GPR_U32(ctx, 3));
    // 0x15afdc: 0x8c820014  lw          $v0, 0x14($a0)
    ctx->pc = 0x15afdcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x15afe0: 0xaca20014  sw          $v0, 0x14($a1)
    ctx->pc = 0x15afe0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 20), GPR_U32(ctx, 2));
    // 0x15afe4: 0x8c830018  lw          $v1, 0x18($a0)
    ctx->pc = 0x15afe4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x15afe8: 0xaca30018  sw          $v1, 0x18($a1)
    ctx->pc = 0x15afe8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 24), GPR_U32(ctx, 3));
    // 0x15afec: 0x8c82001c  lw          $v0, 0x1C($a0)
    ctx->pc = 0x15afecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 28)));
    // 0x15aff0: 0xaca2001c  sw          $v0, 0x1C($a1)
    ctx->pc = 0x15aff0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 28), GPR_U32(ctx, 2));
    // 0x15aff4: 0x8c830020  lw          $v1, 0x20($a0)
    ctx->pc = 0x15aff4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 32)));
    // 0x15aff8: 0xaca30020  sw          $v1, 0x20($a1)
    ctx->pc = 0x15aff8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 32), GPR_U32(ctx, 3));
    // 0x15affc: 0x8c820024  lw          $v0, 0x24($a0)
    ctx->pc = 0x15affcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 36)));
    // 0x15b000: 0xaca20024  sw          $v0, 0x24($a1)
    ctx->pc = 0x15b000u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 36), GPR_U32(ctx, 2));
    // 0x15b004: 0x8c830028  lw          $v1, 0x28($a0)
    ctx->pc = 0x15b004u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 40)));
    // 0x15b008: 0xaca30028  sw          $v1, 0x28($a1)
    ctx->pc = 0x15b008u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 40), GPR_U32(ctx, 3));
    // 0x15b00c: 0x9082002c  lbu         $v0, 0x2C($a0)
    ctx->pc = 0x15b00cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 44)));
    // 0x15b010: 0xa0a2002c  sb          $v0, 0x2C($a1)
    ctx->pc = 0x15b010u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 44), (uint8_t)GPR_U32(ctx, 2));
    // 0x15b014: 0xd8c10000  lqc2        $vf1, 0x0($a2)
    ctx->pc = 0x15b014u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x15b018: 0xf8a10030  sqc2        $vf1, 0x30($a1)
    ctx->pc = 0x15b018u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 48), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x15b01c: 0x8c820040  lw          $v0, 0x40($a0)
    ctx->pc = 0x15b01cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 64)));
    // 0x15b020: 0x24830050  addiu       $v1, $a0, 0x50
    ctx->pc = 0x15b020u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 80));
    // 0x15b024: 0xaca20040  sw          $v0, 0x40($a1)
    ctx->pc = 0x15b024u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 64), GPR_U32(ctx, 2));
    // 0x15b028: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x15b028u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x15b02c: 0xf8a10050  sqc2        $vf1, 0x50($a1)
    ctx->pc = 0x15b02cu;
    WRITE128(ADD32(GPR_U32(ctx, 5), 80), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x15b030: 0xc4800060  lwc1        $f0, 0x60($a0)
    ctx->pc = 0x15b030u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x15b034: 0xe4a00060  swc1        $f0, 0x60($a1)
    ctx->pc = 0x15b034u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 96), bits); }
    // 0x15b038: 0x8c820064  lw          $v0, 0x64($a0)
    ctx->pc = 0x15b038u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 100)));
    // 0x15b03c: 0xaca20064  sw          $v0, 0x64($a1)
    ctx->pc = 0x15b03cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 100), GPR_U32(ctx, 2));
    // 0x15b040: 0x8c830068  lw          $v1, 0x68($a0)
    ctx->pc = 0x15b040u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 104)));
    // 0x15b044: 0xaca30068  sw          $v1, 0x68($a1)
    ctx->pc = 0x15b044u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 104), GPR_U32(ctx, 3));
label_15b048:
    // 0x15b048: 0x26620001  addiu       $v0, $s3, 0x1
    ctx->pc = 0x15b048u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x15b04c: 0x305300ff  andi        $s3, $v0, 0xFF
    ctx->pc = 0x15b04cu;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_15b050:
    // 0x15b050: 0x26430001  addiu       $v1, $s2, 0x1
    ctx->pc = 0x15b050u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_15b054:
    // 0x15b054: 0x92220a20  lbu         $v0, 0xA20($s1)
    ctx->pc = 0x15b054u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 2592)));
    // 0x15b058: 0x307200ff  andi        $s2, $v1, 0xFF
    ctx->pc = 0x15b058u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x15b05c: 0x242102b  sltu        $v0, $s2, $v0
    ctx->pc = 0x15b05cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x15b060: 0x1440ffbb  bnez        $v0, . + 4 + (-0x45 << 2)
    ctx->pc = 0x15B060u;
    {
        const bool branch_taken_0x15b060 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x15B064u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15B060u;
        // 0x15b064: 0x2541818  mult        $v1, $s2, $s4 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 20); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x15b060) {
            ctx->pc = 0x15AF50u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_15af50;
        }
    }
    ctx->pc = 0x15B068u;
label_15b068:
    // 0x15b068: 0x92220a20  lbu         $v0, 0xA20($s1)
    ctx->pc = 0x15b068u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 2592)));
    // 0x15b06c: 0x262102b  sltu        $v0, $s3, $v0
    ctx->pc = 0x15b06cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x15b070: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x15B070u;
    {
        const bool branch_taken_0x15b070 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x15B074u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15B070u;
        // 0x15b074: 0x260802d  daddu       $s0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15b070) {
            ctx->pc = 0x15B0A0u;
            goto label_15b0a0;
        }
    }
    ctx->pc = 0x15B078u;
    // 0x15b078: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x15b078u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15b07c: 0x0  nop
    ctx->pc = 0x15b07cu;
    // NOP
label_15b080:
    // 0x15b080: 0xc056b98  jal         func_15AE60
    ctx->pc = 0x15B080u;
    SET_GPR_U32(ctx, 31, 0x15B088u);
    ctx->pc = 0x15B084u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15B080u;
    // 0x15b084: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15AE60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15AE60u, 0x15B080u, 0x15B088u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15B088u;
label_15b088:
    // 0x15b088: 0x26030001  addiu       $v1, $s0, 0x1
    ctx->pc = 0x15b088u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x15b08c: 0x92220a20  lbu         $v0, 0xA20($s1)
    ctx->pc = 0x15b08cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 2592)));
    // 0x15b090: 0x307000ff  andi        $s0, $v1, 0xFF
    ctx->pc = 0x15b090u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x15b094: 0x202102b  sltu        $v0, $s0, $v0
    ctx->pc = 0x15b094u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x15b098: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x15B098u;
    {
        const bool branch_taken_0x15b098 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x15B09Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15B098u;
        // 0x15b09c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15b098) {
            ctx->pc = 0x15B080u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_15b080;
        }
    }
    ctx->pc = 0x15B0A0u;
label_15b0a0:
    // 0x15b0a0: 0xa2330a20  sb          $s3, 0xA20($s1)
    ctx->pc = 0x15b0a0u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 2592), (uint8_t)GPR_U32(ctx, 19));
    // 0x15b0a4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x15b0a4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x15b0a8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x15b0a8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x15b0ac: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x15b0acu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x15b0b0: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x15b0b0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x15b0b4: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x15b0b4u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x15b0b8: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x15b0b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x15b0bc: 0x3e00008  jr          $ra
    ctx->pc = 0x15B0BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15B0C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15B0BCu;
        // 0x15b0c0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15B0BCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x15B0C4u;
    // 0x15b0c4: 0x0  nop
    ctx->pc = 0x15b0c4u;
    // NOP
    ctx->pc = 0x15b0c8u;
}
