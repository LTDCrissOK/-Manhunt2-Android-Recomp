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

// Function: sub_0028F008
// Address: 0x28f008 - 0x28f0d8
void sub_0028F008_0x28f008(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0028F008_0x28f008");
#endif

    switch (ctx->pc) {
        case 0x28f008u: goto label_28f008;
        case 0x28f00cu: goto label_28f00c;
        case 0x28f010u: goto label_28f010;
        case 0x28f014u: goto label_28f014;
        case 0x28f018u: goto label_28f018;
        case 0x28f01cu: goto label_28f01c;
        case 0x28f020u: goto label_28f020;
        case 0x28f024u: goto label_28f024;
        case 0x28f028u: goto label_28f028;
        case 0x28f02cu: goto label_28f02c;
        case 0x28f030u: goto label_28f030;
        case 0x28f034u: goto label_28f034;
        case 0x28f038u: goto label_28f038;
        case 0x28f03cu: goto label_28f03c;
        case 0x28f040u: goto label_28f040;
        case 0x28f044u: goto label_28f044;
        case 0x28f048u: goto label_28f048;
        case 0x28f04cu: goto label_28f04c;
        case 0x28f050u: goto label_28f050;
        case 0x28f054u: goto label_28f054;
        case 0x28f058u: goto label_28f058;
        case 0x28f05cu: goto label_28f05c;
        case 0x28f060u: goto label_28f060;
        case 0x28f064u: goto label_28f064;
        case 0x28f068u: goto label_28f068;
        case 0x28f06cu: goto label_28f06c;
        case 0x28f070u: goto label_28f070;
        case 0x28f074u: goto label_28f074;
        case 0x28f078u: goto label_28f078;
        case 0x28f07cu: goto label_28f07c;
        case 0x28f080u: goto label_28f080;
        case 0x28f084u: goto label_28f084;
        case 0x28f088u: goto label_28f088;
        case 0x28f08cu: goto label_28f08c;
        case 0x28f090u: goto label_28f090;
        case 0x28f094u: goto label_28f094;
        case 0x28f098u: goto label_28f098;
        case 0x28f09cu: goto label_28f09c;
        case 0x28f0a0u: goto label_28f0a0;
        case 0x28f0a4u: goto label_28f0a4;
        case 0x28f0a8u: goto label_28f0a8;
        case 0x28f0acu: goto label_28f0ac;
        case 0x28f0b0u: goto label_28f0b0;
        case 0x28f0b4u: goto label_28f0b4;
        case 0x28f0b8u: goto label_28f0b8;
        case 0x28f0bcu: goto label_28f0bc;
        case 0x28f0c0u: goto label_28f0c0;
        case 0x28f0c4u: goto label_28f0c4;
        case 0x28f0c8u: goto label_28f0c8;
        case 0x28f0ccu: goto label_28f0cc;
        case 0x28f0d0u: goto label_28f0d0;
        case 0x28f0d4u: goto label_28f0d4;
        default: break;
    }

    ctx->pc = 0x28f008u;

label_28f008:
    // 0x28f008: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x28f008u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_28f00c:
    // 0x28f00c: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x28f00cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
label_28f010:
    // 0x28f010: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x28f010u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_28f014:
    // 0x28f014: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x28f014u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_28f018:
    // 0x28f018: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x28f018u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_28f01c:
    // 0x28f01c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x28f01cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_28f020:
    // 0x28f020: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x28f020u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
label_28f024:
    // 0x28f024: 0x8c62cba8  lw          $v0, -0x3458($v1)
    ctx->pc = 0x28f024u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294953896)));
label_28f028:
    // 0x28f028: 0x8c44000c  lw          $a0, 0xC($v0)
    ctx->pc = 0x28f028u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_28f02c:
    // 0x28f02c: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x28f02cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_28f030:
    // 0x28f030: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x28f030u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_28f034:
    // 0x28f034: 0x40f809  jalr        $v0
label_28f038:
    if (ctx->pc == 0x28F038u) {
        ctx->pc = 0x28F03Cu;
        goto label_28f03c;
    }
    ctx->pc = 0x28F034u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x28F03Cu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28F034u, 0x28F03Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x28F03Cu;
label_28f03c:
    // 0x28f03c: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x28f03cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_28f040:
    // 0x28f040: 0x8e020038  lw          $v0, 0x38($s0)
    ctx->pc = 0x28f040u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 56)));
label_28f044:
    // 0x28f044: 0x2421023  subu        $v0, $s2, $v0
    ctx->pc = 0x28f044u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
label_28f048:
    // 0x28f048: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
label_28f04c:
    if (ctx->pc == 0x28F04Cu) {
        ctx->pc = 0x28F04Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28F048u;
        // 0x28f04c: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28F050u;
        goto label_28f050;
    }
    ctx->pc = 0x28F048u;
    {
        const bool branch_taken_0x28f048 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x28F04Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28F048u;
        // 0x28f04c: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28f048) {
            ctx->pc = 0x28F064u;
            goto label_28f064;
        }
    }
    ctx->pc = 0x28F050u;
label_28f050:
    // 0x28f050: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x28f050u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_28f054:
    // 0x28f054: 0x0  nop
    ctx->pc = 0x28f054u;
    // NOP
label_28f058:
    // 0x28f058: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x28f058u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_28f05c:
    // 0x28f05c: 0x10000008  b           . + 4 + (0x8 << 2)
label_28f060:
    if (ctx->pc == 0x28F060u) {
        ctx->pc = 0x28F060u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28F05Cu;
        // 0x28f060: 0x8e020034  lw          $v0, 0x34($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28F064u;
        goto label_28f064;
    }
    ctx->pc = 0x28F05Cu;
    {
        const bool branch_taken_0x28f05c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28F060u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28F05Cu;
        // 0x28f060: 0x8e020034  lw          $v0, 0x34($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28f05c) {
            ctx->pc = 0x28F080u;
            goto label_28f080;
        }
    }
    ctx->pc = 0x28F064u;
label_28f064:
    // 0x28f064: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x28f064u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_28f068:
    // 0x28f068: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x28f068u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_28f06c:
    // 0x28f06c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x28f06cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_28f070:
    // 0x28f070: 0x0  nop
    ctx->pc = 0x28f070u;
    // NOP
label_28f074:
    // 0x28f074: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x28f074u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_28f078:
    // 0x28f078: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x28f078u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_28f07c:
    // 0x28f07c: 0x8e020034  lw          $v0, 0x34($s0)
    ctx->pc = 0x28f07cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
label_28f080:
    // 0x28f080: 0x26110008  addiu       $s1, $s0, 0x8
    ctx->pc = 0x28f080u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
label_28f084:
    // 0x28f084: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x28f084u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_28f088:
    // 0x28f088: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x28f088u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
label_28f08c:
    // 0x28f08c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x28f08cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_28f090:
    // 0x28f090: 0xc4600008  lwc1        $f0, 0x8($v1)
    ctx->pc = 0x28f090u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_28f094:
    // 0x28f094: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x28f094u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_28f098:
    // 0x28f098: 0x0  nop
    ctx->pc = 0x28f098u;
    // NOP
label_28f09c:
    // 0x28f09c: 0x45020005  bc1fl       . + 4 + (0x5 << 2)
label_28f0a0:
    if (ctx->pc == 0x28F0A0u) {
        ctx->pc = 0x28F0A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28F09Cu;
        // 0x28f0a0: 0x8e030034  lw          $v1, 0x34($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28F0A4u;
        goto label_28f0a4;
    }
    ctx->pc = 0x28F09Cu;
    {
        const bool branch_taken_0x28f09c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x28f09c) {
            ctx->pc = 0x28F0A0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x28F09Cu;
            // 0x28f0a0: 0x8e030034  lw          $v1, 0x34($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x28F0B4u;
            goto label_28f0b4;
        }
    }
    ctx->pc = 0x28F0A4u;
label_28f0a4:
    // 0x28f0a4: 0xc0a3c48  jal         func_28F120
label_28f0a8:
    if (ctx->pc == 0x28F0A8u) {
        ctx->pc = 0x28F0A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28F0A4u;
        // 0x28f0a8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28F0ACu;
        goto label_28f0ac;
    }
    ctx->pc = 0x28F0A4u;
    SET_GPR_U32(ctx, 31, 0x28F0ACu);
    ctx->pc = 0x28F0A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28F0A4u;
    // 0x28f0a8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28F120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28F120u, 0x28F0A4u, 0x28F0ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28F0ACu;
label_28f0ac:
    // 0x28f0ac: 0xae120038  sw          $s2, 0x38($s0)
    ctx->pc = 0x28f0acu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 56), GPR_U32(ctx, 18));
label_28f0b0:
    // 0x28f0b0: 0x8e030034  lw          $v1, 0x34($s0)
    ctx->pc = 0x28f0b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
label_28f0b4:
    // 0x28f0b4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x28f0b4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_28f0b8:
    // 0x28f0b8: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x28f0b8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_28f0bc:
    // 0x28f0bc: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x28f0bcu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_28f0c0:
    // 0x28f0c0: 0x2231821  addu        $v1, $s1, $v1
    ctx->pc = 0x28f0c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
label_28f0c4:
    // 0x28f0c4: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x28f0c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_28f0c8:
    // 0x28f0c8: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x28f0c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_28f0cc:
    // 0x28f0cc: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x28f0ccu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_28f0d0:
    // 0x28f0d0: 0x3e00008  jr          $ra
label_28f0d4:
    if (ctx->pc == 0x28F0D4u) {
        ctx->pc = 0x28F0D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28F0D0u;
        // 0x28f0d4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28F0D8u;
        goto label_fallthrough_0x28f0d0;
    }
    ctx->pc = 0x28F0D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x28F0D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28F0D0u;
        // 0x28f0d4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28F0D0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x28f0d0:
    ctx->pc = 0x28F0D8u;
}
