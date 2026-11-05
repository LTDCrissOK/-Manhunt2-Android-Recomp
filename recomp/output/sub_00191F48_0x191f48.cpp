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

// Function: sub_00191F48
// Address: 0x191f48 - 0x192028
void sub_00191F48_0x191f48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00191F48_0x191f48");
#endif

    switch (ctx->pc) {
        case 0x191f48u: goto label_191f48;
        case 0x191f4cu: goto label_191f4c;
        case 0x191f50u: goto label_191f50;
        case 0x191f54u: goto label_191f54;
        case 0x191f58u: goto label_191f58;
        case 0x191f5cu: goto label_191f5c;
        case 0x191f60u: goto label_191f60;
        case 0x191f64u: goto label_191f64;
        case 0x191f68u: goto label_191f68;
        case 0x191f6cu: goto label_191f6c;
        case 0x191f70u: goto label_191f70;
        case 0x191f74u: goto label_191f74;
        case 0x191f78u: goto label_191f78;
        case 0x191f7cu: goto label_191f7c;
        case 0x191f80u: goto label_191f80;
        case 0x191f84u: goto label_191f84;
        case 0x191f88u: goto label_191f88;
        case 0x191f8cu: goto label_191f8c;
        case 0x191f90u: goto label_191f90;
        case 0x191f94u: goto label_191f94;
        case 0x191f98u: goto label_191f98;
        case 0x191f9cu: goto label_191f9c;
        case 0x191fa0u: goto label_191fa0;
        case 0x191fa4u: goto label_191fa4;
        case 0x191fa8u: goto label_191fa8;
        case 0x191facu: goto label_191fac;
        case 0x191fb0u: goto label_191fb0;
        case 0x191fb4u: goto label_191fb4;
        case 0x191fb8u: goto label_191fb8;
        case 0x191fbcu: goto label_191fbc;
        case 0x191fc0u: goto label_191fc0;
        case 0x191fc4u: goto label_191fc4;
        case 0x191fc8u: goto label_191fc8;
        case 0x191fccu: goto label_191fcc;
        case 0x191fd0u: goto label_191fd0;
        case 0x191fd4u: goto label_191fd4;
        case 0x191fd8u: goto label_191fd8;
        case 0x191fdcu: goto label_191fdc;
        case 0x191fe0u: goto label_191fe0;
        case 0x191fe4u: goto label_191fe4;
        case 0x191fe8u: goto label_191fe8;
        case 0x191fecu: goto label_191fec;
        case 0x191ff0u: goto label_191ff0;
        case 0x191ff4u: goto label_191ff4;
        case 0x191ff8u: goto label_191ff8;
        case 0x191ffcu: goto label_191ffc;
        case 0x192000u: goto label_192000;
        case 0x192004u: goto label_192004;
        case 0x192008u: goto label_192008;
        case 0x19200cu: goto label_19200c;
        case 0x192010u: goto label_192010;
        case 0x192014u: goto label_192014;
        case 0x192018u: goto label_192018;
        case 0x19201cu: goto label_19201c;
        case 0x192020u: goto label_192020;
        case 0x192024u: goto label_192024;
        default: break;
    }

    ctx->pc = 0x191f48u;

label_191f48:
    // 0x191f48: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x191f48u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_191f4c:
    // 0x191f4c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x191f4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_191f50:
    // 0x191f50: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x191f50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
label_191f54:
    // 0x191f54: 0xc061a16  jal         func_186858
label_191f58:
    if (ctx->pc == 0x191F58u) {
        ctx->pc = 0x191F58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x191F54u;
        // 0x191f58: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x191F5Cu;
        goto label_191f5c;
    }
    ctx->pc = 0x191F54u;
    SET_GPR_U32(ctx, 31, 0x191F5Cu);
    ctx->pc = 0x191F58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x191F54u;
    // 0x191f58: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186858u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186858u, 0x191F54u, 0x191F5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x191F5Cu;
label_191f5c:
    // 0x191f5c: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x191f5cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
label_191f60:
    // 0x191f60: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x191f60u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_191f64:
    // 0x191f64: 0x34038000  ori         $v1, $zero, 0x8000
    ctx->pc = 0x191f64u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
label_191f68:
    // 0x191f68: 0x31f78  dsll        $v1, $v1, 29
    ctx->pc = 0x191f68u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 29);
label_191f6c:
    // 0x191f6c: 0xe4400028  swc1        $f0, 0x28($v0)
    ctx->pc = 0x191f6cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 40), bits); }
label_191f70:
    // 0x191f70: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x191f70u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_191f74:
    // 0x191f74: 0xdca41020  ld          $a0, 0x1020($a1)
    ctx->pc = 0x191f74u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 5), 4128)));
label_191f78:
    // 0x191f78: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x191f78u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
label_191f7c:
    // 0x191f7c: 0x54600012  bnel        $v1, $zero, . + 4 + (0x12 << 2)
label_191f80:
    if (ctx->pc == 0x191F80u) {
        ctx->pc = 0x191F80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x191F7Cu;
        // 0x191f80: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x191F84u;
        goto label_191f84;
    }
    ctx->pc = 0x191F7Cu;
    {
        const bool branch_taken_0x191f7c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x191f7c) {
            ctx->pc = 0x191F80u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x191F7Cu;
            // 0x191f80: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x191FC8u;
            goto label_191fc8;
        }
    }
    ctx->pc = 0x191F84u;
label_191f84:
    // 0x191f84: 0x34028000  ori         $v0, $zero, 0x8000
    ctx->pc = 0x191f84u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
label_191f88:
    // 0x191f88: 0x21538  dsll        $v0, $v0, 20
    ctx->pc = 0x191f88u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 20);
label_191f8c:
    // 0x191f8c: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x191f8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
label_191f90:
    // 0x191f90: 0x5040000d  beql        $v0, $zero, . + 4 + (0xD << 2)
label_191f94:
    if (ctx->pc == 0x191F94u) {
        ctx->pc = 0x191F94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x191F90u;
        // 0x191f94: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x191F98u;
        goto label_191f98;
    }
    ctx->pc = 0x191F90u;
    {
        const bool branch_taken_0x191f90 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x191f90) {
            ctx->pc = 0x191F94u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x191F90u;
            // 0x191f94: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x191FC8u;
            goto label_191fc8;
        }
    }
    ctx->pc = 0x191F98u;
label_191f98:
    // 0x191f98: 0x3c02bfff  lui         $v0, 0xBFFF
    ctx->pc = 0x191f98u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49151 << 16));
label_191f9c:
    // 0x191f9c: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x191f9cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_191fa0:
    // 0x191fa0: 0x21178  dsll        $v0, $v0, 5
    ctx->pc = 0x191fa0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 5);
label_191fa4:
    // 0x191fa4: 0x3442001f  ori         $v0, $v0, 0x1F
    ctx->pc = 0x191fa4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)31);
label_191fa8:
    // 0x191fa8: 0x3c03bfff  lui         $v1, 0xBFFF
    ctx->pc = 0x191fa8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49151 << 16));
label_191fac:
    // 0x191fac: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x191facu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
label_191fb0:
    // 0x191fb0: 0x319b8  dsll        $v1, $v1, 6
    ctx->pc = 0x191fb0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 6);
label_191fb4:
    // 0x191fb4: 0x3463003f  ori         $v1, $v1, 0x3F
    ctx->pc = 0x191fb4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)63);
label_191fb8:
    // 0x191fb8: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x191fb8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
label_191fbc:
    // 0x191fbc: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x191fbcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_191fc0:
    // 0x191fc0: 0xfca21020  sd          $v0, 0x1020($a1)
    ctx->pc = 0x191fc0u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 4128), GPR_U64(ctx, 2));
label_191fc4:
    // 0x191fc4: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x191fc4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_191fc8:
    // 0x191fc8: 0x34028000  ori         $v0, $zero, 0x8000
    ctx->pc = 0x191fc8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
label_191fcc:
    // 0x191fcc: 0x21778  dsll        $v0, $v0, 29
    ctx->pc = 0x191fccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 29);
label_191fd0:
    // 0x191fd0: 0xdc831020  ld          $v1, 0x1020($a0)
    ctx->pc = 0x191fd0u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 4), 4128)));
label_191fd4:
    // 0x191fd4: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x191fd4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_191fd8:
    // 0x191fd8: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
label_191fdc:
    if (ctx->pc == 0x191FDCu) {
        ctx->pc = 0x191FDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x191FD8u;
        // 0x191fdc: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x191FE0u;
        goto label_191fe0;
    }
    ctx->pc = 0x191FD8u;
    {
        const bool branch_taken_0x191fd8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x191fd8) {
            ctx->pc = 0x191FDCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x191FD8u;
            // 0x191fdc: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x191FFCu;
            goto label_191ffc;
        }
    }
    ctx->pc = 0x191FE0u;
label_191fe0:
    // 0x191fe0: 0x3c02bfff  lui         $v0, 0xBFFF
    ctx->pc = 0x191fe0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49151 << 16));
label_191fe4:
    // 0x191fe4: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x191fe4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_191fe8:
    // 0x191fe8: 0x211b8  dsll        $v0, $v0, 6
    ctx->pc = 0x191fe8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 6);
label_191fec:
    // 0x191fec: 0x3442003f  ori         $v0, $v0, 0x3F
    ctx->pc = 0x191fecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)63);
label_191ff0:
    // 0x191ff0: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x191ff0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_191ff4:
    // 0x191ff4: 0xfc821020  sd          $v0, 0x1020($a0)
    ctx->pc = 0x191ff4u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 4128), GPR_U64(ctx, 2));
label_191ff8:
    // 0x191ff8: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x191ff8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_191ffc:
    // 0x191ffc: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
label_192000:
    if (ctx->pc == 0x192000u) {
        ctx->pc = 0x192000u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x191FFCu;
        // 0x192000: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x192004u;
        goto label_192004;
    }
    ctx->pc = 0x191FFCu;
    {
        const bool branch_taken_0x191ffc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x192000u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x191FFCu;
        // 0x192000: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x191ffc) {
            ctx->pc = 0x192018u;
            goto label_192018;
        }
    }
    ctx->pc = 0x192004u;
label_192004:
    // 0x192004: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x192004u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_192008:
    // 0x192008: 0x8c620010  lw          $v0, 0x10($v1)
    ctx->pc = 0x192008u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
label_19200c:
    // 0x19200c: 0x40f809  jalr        $v0
label_192010:
    if (ctx->pc == 0x192010u) {
        ctx->pc = 0x192014u;
        goto label_192014;
    }
    ctx->pc = 0x19200Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x192014u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19200Cu, 0x192014u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x192014u;
label_192014:
    // 0x192014: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x192014u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_192018:
    // 0x192018: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x192018u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_19201c:
    // 0x19201c: 0x3e00008  jr          $ra
label_192020:
    if (ctx->pc == 0x192020u) {
        ctx->pc = 0x192020u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19201Cu;
        // 0x192020: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x192024u;
        goto label_192024;
    }
    ctx->pc = 0x19201Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x192020u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19201Cu;
        // 0x192020: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19201Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x192024u;
label_192024:
    // 0x192024: 0x0  nop
    ctx->pc = 0x192024u;
    // NOP
    ctx->pc = 0x192028u;
}
