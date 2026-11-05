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

// Function: sub_002BA190
// Address: 0x2ba190 - 0x2ba2b0
void sub_002BA190_0x2ba190(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002BA190_0x2ba190");
#endif

    switch (ctx->pc) {
        case 0x2ba1c8u: goto label_2ba1c8;
        case 0x2ba220u: goto label_2ba220;
        case 0x2ba230u: goto label_2ba230;
        case 0x2ba268u: goto label_2ba268;
        case 0x2ba290u: goto label_2ba290;
        default: break;
    }

    ctx->pc = 0x2ba190u;

    // 0x2ba190: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x2ba190u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x2ba194: 0x3c020057  lui         $v0, 0x57
    ctx->pc = 0x2ba194u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)87 << 16));
    // 0x2ba198: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x2ba198u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x2ba19c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2ba19cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ba1a0: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x2ba1a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x2ba1a4: 0x24504d60  addiu       $s0, $v0, 0x4D60
    ctx->pc = 0x2ba1a4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 19808));
    // 0x2ba1a8: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x2ba1a8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ba1ac: 0xffb30038  sd          $s3, 0x38($sp)
    ctx->pc = 0x2ba1acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 19));
    // 0x2ba1b0: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x2ba1b0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ba1b4: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2ba1b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ba1b8: 0xffb10028  sd          $s1, 0x28($sp)
    ctx->pc = 0x2ba1b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 17));
    // 0x2ba1bc: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x2ba1bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x2ba1c0: 0xc0ee5f8  jal         func_3B97E0
    ctx->pc = 0x2BA1C0u;
    SET_GPR_U32(ctx, 31, 0x2BA1C8u);
    ctx->pc = 0x2BA1C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BA1C0u;
    // 0x2ba1c4: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B97E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B97E0u, 0x2BA1C0u, 0x2BA1C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BA1C8u;
label_2ba1c8:
    // 0x2ba1c8: 0x18400009  blez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2BA1C8u;
    {
        const bool branch_taken_0x2ba1c8 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x2BA1CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA1C8u;
        // 0x2ba1cc: 0x3c040057  lui         $a0, 0x57 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ba1c8) {
            ctx->pc = 0x2BA1F0u;
            goto label_2ba1f0;
        }
    }
    ctx->pc = 0x2BA1D0u;
    // 0x2ba1d0: 0x92020002  lbu         $v0, 0x2($s0)
    ctx->pc = 0x2ba1d0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x2ba1d4: 0x92030003  lbu         $v1, 0x3($s0)
    ctx->pc = 0x2ba1d4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 3)));
    // 0x2ba1d8: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x2ba1d8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ba1dc: 0x21200  sll         $v0, $v0, 8
    ctx->pc = 0x2ba1dcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
    // 0x2ba1e0: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x2ba1e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x2ba1e4: 0x3842ffff  xori        $v0, $v0, 0xFFFF
    ctx->pc = 0x2ba1e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)65535);
    // 0x2ba1e8: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2BA1E8u;
    {
        const bool branch_taken_0x2ba1e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BA1ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA1E8u;
        // 0x2ba1ec: 0xac824d5c  sw          $v0, 0x4D5C($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 19804), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ba1e8) {
            ctx->pc = 0x2BA1FCu;
            goto label_2ba1fc;
        }
    }
    ctx->pc = 0x2BA1F0u;
label_2ba1f0:
    // 0x2ba1f0: 0x3c020057  lui         $v0, 0x57
    ctx->pc = 0x2ba1f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)87 << 16));
    // 0x2ba1f4: 0xac404d5c  sw          $zero, 0x4D5C($v0)
    ctx->pc = 0x2ba1f4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x574D5Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x574D5Cu, _value); } while (0);
    // 0x2ba1f8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2ba1f8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2ba1fc:
    // 0x2ba1fc: 0x86420004  lh          $v0, 0x4($s2)
    ctx->pc = 0x2ba1fcu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x2ba200: 0x24100064  addiu       $s0, $zero, 0x64
    ctx->pc = 0x2ba200u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    // 0x2ba204: 0x54500001  bnel        $v0, $s0, . + 4 + (0x1 << 2)
    ctx->pc = 0x2BA204u;
    {
        const bool branch_taken_0x2ba204 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        if (branch_taken_0x2ba204) {
            ctx->pc = 0x2BA208u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2BA204u;
            // 0x2ba208: 0xaca04d5c  sw          $zero, 0x4D5C($a1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 5), 19804), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2BA20Cu;
            goto label_2ba20c;
        }
    }
    ctx->pc = 0x2BA20Cu;
label_2ba20c:
    // 0x2ba20c: 0xafa00010  sw          $zero, 0x10($sp)
    ctx->pc = 0x2ba20cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
    // 0x2ba210: 0x3c110040  lui         $s1, 0x40
    ctx->pc = 0x2ba210u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)64 << 16));
    // 0x2ba214: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x2ba214u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x2ba218: 0xc0ae8fa  jal         func_2BA3E8
    ctx->pc = 0x2BA218u;
    SET_GPR_U32(ctx, 31, 0x2BA220u);
    ctx->pc = 0x2BA21Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BA218u;
    // 0x2ba21c: 0x8ca44d5c  lw          $a0, 0x4D5C($a1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 19804)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BA3E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BA3E8u, 0x2BA218u, 0x2BA220u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BA220u;
label_2ba220:
    // 0x2ba220: 0x8e24cba8  lw          $a0, -0x3458($s1)
    ctx->pc = 0x2ba220u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294953896)));
    // 0x2ba224: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x2ba224u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ba228: 0xc082c1e  jal         func_20B078
    ctx->pc = 0x2BA228u;
    SET_GPR_U32(ctx, 31, 0x2BA230u);
    ctx->pc = 0x2BA22Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BA228u;
    // 0x2ba22c: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20B078u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20B078u, 0x2BA228u, 0x2BA230u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BA230u;
label_2ba230:
    // 0x2ba230: 0x86430004  lh          $v1, 0x4($s2)
    ctx->pc = 0x2ba230u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x2ba234: 0x14700017  bne         $v1, $s0, . + 4 + (0x17 << 2)
    ctx->pc = 0x2BA234u;
    {
        const bool branch_taken_0x2ba234 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 16));
        ctx->pc = 0x2BA238u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA234u;
        // 0x2ba238: 0xdfb00020  ld          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ba234) {
            ctx->pc = 0x2BA294u;
            goto label_2ba294;
        }
    }
    ctx->pc = 0x2BA23Cu;
    // 0x2ba23c: 0x26704d60  addiu       $s0, $s3, 0x4D60
    ctx->pc = 0x2ba23cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), 19808));
    // 0x2ba240: 0x92030007  lbu         $v1, 0x7($s0)
    ctx->pc = 0x2ba240u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 7)));
    // 0x2ba244: 0x92020006  lbu         $v0, 0x6($s0)
    ctx->pc = 0x2ba244u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 6)));
    // 0x2ba248: 0x44836800  mtc1        $v1, $f13
    ctx->pc = 0x2ba248u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x2ba24c: 0x0  nop
    ctx->pc = 0x2ba24cu;
    // NOP
    // 0x2ba250: 0x46806b60  cvt.s.w     $f13, $f13
    ctx->pc = 0x2ba250u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[13], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
    // 0x2ba254: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x2ba254u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2ba258: 0x0  nop
    ctx->pc = 0x2ba258u;
    // NOP
    // 0x2ba25c: 0x46806320  cvt.s.w     $f12, $f12
    ctx->pc = 0x2ba25cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[12], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x2ba260: 0xc082c2c  jal         func_20B0B0
    ctx->pc = 0x2BA260u;
    SET_GPR_U32(ctx, 31, 0x2BA268u);
    ctx->pc = 0x2BA264u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BA260u;
    // 0x2ba264: 0x8e24cba8  lw          $a0, -0x3458($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294953896)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20B0B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20B0B0u, 0x2BA260u, 0x2BA268u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BA268u;
label_2ba268:
    // 0x2ba268: 0x92030005  lbu         $v1, 0x5($s0)
    ctx->pc = 0x2ba268u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 5)));
    // 0x2ba26c: 0x92020004  lbu         $v0, 0x4($s0)
    ctx->pc = 0x2ba26cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x2ba270: 0x44836800  mtc1        $v1, $f13
    ctx->pc = 0x2ba270u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x2ba274: 0x0  nop
    ctx->pc = 0x2ba274u;
    // NOP
    // 0x2ba278: 0x46806b60  cvt.s.w     $f13, $f13
    ctx->pc = 0x2ba278u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[13], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
    // 0x2ba27c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x2ba27cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2ba280: 0x0  nop
    ctx->pc = 0x2ba280u;
    // NOP
    // 0x2ba284: 0x46806320  cvt.s.w     $f12, $f12
    ctx->pc = 0x2ba284u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[12], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x2ba288: 0xc082c66  jal         func_20B198
    ctx->pc = 0x2BA288u;
    SET_GPR_U32(ctx, 31, 0x2BA290u);
    ctx->pc = 0x2BA28Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BA288u;
    // 0x2ba28c: 0x8e24cba8  lw          $a0, -0x3458($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294953896)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20B198u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20B198u, 0x2BA288u, 0x2BA290u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BA290u;
label_2ba290:
    // 0x2ba290: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x2ba290u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_2ba294:
    // 0x2ba294: 0xdfb10028  ld          $s1, 0x28($sp)
    ctx->pc = 0x2ba294u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2ba298: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x2ba298u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2ba29c: 0xdfb30038  ld          $s3, 0x38($sp)
    ctx->pc = 0x2ba29cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2ba2a0: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x2ba2a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2ba2a4: 0x3e00008  jr          $ra
    ctx->pc = 0x2BA2A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2BA2A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA2A4u;
        // 0x2ba2a8: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2BA2A4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2BA2ACu;
    // 0x2ba2ac: 0x0  nop
    ctx->pc = 0x2ba2acu;
    // NOP
    ctx->pc = 0x2ba2b0u;
}
