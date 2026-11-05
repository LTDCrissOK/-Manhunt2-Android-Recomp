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

// Function: sub_00345FA0
// Address: 0x345fa0 - 0x346058
void sub_00345FA0_0x345fa0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00345FA0_0x345fa0");
#endif

    switch (ctx->pc) {
        case 0x345fa0u: goto label_345fa0;
        case 0x345fa4u: goto label_345fa4;
        case 0x345fa8u: goto label_345fa8;
        case 0x345facu: goto label_345fac;
        case 0x345fb0u: goto label_345fb0;
        case 0x345fb4u: goto label_345fb4;
        case 0x345fb8u: goto label_345fb8;
        case 0x345fbcu: goto label_345fbc;
        case 0x345fc0u: goto label_345fc0;
        case 0x345fc4u: goto label_345fc4;
        case 0x345fc8u: goto label_345fc8;
        case 0x345fccu: goto label_345fcc;
        case 0x345fd0u: goto label_345fd0;
        case 0x345fd4u: goto label_345fd4;
        case 0x345fd8u: goto label_345fd8;
        case 0x345fdcu: goto label_345fdc;
        case 0x345fe0u: goto label_345fe0;
        case 0x345fe4u: goto label_345fe4;
        case 0x345fe8u: goto label_345fe8;
        case 0x345fecu: goto label_345fec;
        case 0x345ff0u: goto label_345ff0;
        case 0x345ff4u: goto label_345ff4;
        case 0x345ff8u: goto label_345ff8;
        case 0x345ffcu: goto label_345ffc;
        case 0x346000u: goto label_346000;
        case 0x346004u: goto label_346004;
        case 0x346008u: goto label_346008;
        case 0x34600cu: goto label_34600c;
        case 0x346010u: goto label_346010;
        case 0x346014u: goto label_346014;
        case 0x346018u: goto label_346018;
        case 0x34601cu: goto label_34601c;
        case 0x346020u: goto label_346020;
        case 0x346024u: goto label_346024;
        case 0x346028u: goto label_346028;
        case 0x34602cu: goto label_34602c;
        case 0x346030u: goto label_346030;
        case 0x346034u: goto label_346034;
        case 0x346038u: goto label_346038;
        case 0x34603cu: goto label_34603c;
        case 0x346040u: goto label_346040;
        case 0x346044u: goto label_346044;
        case 0x346048u: goto label_346048;
        case 0x34604cu: goto label_34604c;
        case 0x346050u: goto label_346050;
        case 0x346054u: goto label_346054;
        default: break;
    }

    ctx->pc = 0x345fa0u;

label_345fa0:
    // 0x345fa0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x345fa0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_345fa4:
    // 0x345fa4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x345fa4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_345fa8:
    // 0x345fa8: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x345fa8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_345fac:
    // 0x345fac: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x345facu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_345fb0:
    // 0x345fb0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x345fb0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_345fb4:
    // 0x345fb4: 0x58880  sll         $s1, $a1, 2
    ctx->pc = 0x345fb4u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_345fb8:
    // 0x345fb8: 0x8e020118  lw          $v0, 0x118($s0)
    ctx->pc = 0x345fb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 280)));
label_345fbc:
    // 0x345fbc: 0x8e030130  lw          $v1, 0x130($s0)
    ctx->pc = 0x345fbcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 304)));
label_345fc0:
    // 0x345fc0: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x345fc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
label_345fc4:
    // 0x345fc4: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x345fc4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_345fc8:
    // 0x345fc8: 0x60f809  jalr        $v1
label_345fcc:
    if (ctx->pc == 0x345FCCu) {
        ctx->pc = 0x345FCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x345FC8u;
        // 0x345fcc: 0x24a50030  addiu       $a1, $a1, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x345FD0u;
        goto label_345fd0;
    }
    ctx->pc = 0x345FC8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x345FD0u);
        ctx->pc = 0x345FCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x345FC8u;
        // 0x345fcc: 0x24a50030  addiu       $a1, $a1, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x345FC8u, 0x345FD0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x345FD0u;
label_345fd0:
    // 0x345fd0: 0x8e020118  lw          $v0, 0x118($s0)
    ctx->pc = 0x345fd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 280)));
label_345fd4:
    // 0x345fd4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x345fd4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_345fd8:
    // 0x345fd8: 0x8e06012c  lw          $a2, 0x12C($s0)
    ctx->pc = 0x345fd8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 300)));
label_345fdc:
    // 0x345fdc: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x345fdcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
label_345fe0:
    // 0x345fe0: 0xc0f809  jalr        $a2
label_345fe4:
    if (ctx->pc == 0x345FE4u) {
        ctx->pc = 0x345FE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x345FE0u;
        // 0x345fe4: 0x8c450000  lw          $a1, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x345FE8u;
        goto label_345fe8;
    }
    ctx->pc = 0x345FE0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 6);
        SET_GPR_U32(ctx, 31, 0x345FE8u);
        ctx->pc = 0x345FE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x345FE0u;
        // 0x345fe4: 0x8c450000  lw          $a1, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x345FE0u, 0x345FE8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x345FE8u;
label_345fe8:
    // 0x345fe8: 0x8e030138  lw          $v1, 0x138($s0)
    ctx->pc = 0x345fe8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 312)));
label_345fec:
    // 0x345fec: 0x60f809  jalr        $v1
label_345ff0:
    if (ctx->pc == 0x345FF0u) {
        ctx->pc = 0x345FF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x345FECu;
        // 0x345ff0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x345FF4u;
        goto label_345ff4;
    }
    ctx->pc = 0x345FECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x345FF4u);
        ctx->pc = 0x345FF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x345FECu;
        // 0x345ff0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x345FECu, 0x345FF4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x345FF4u;
label_345ff4:
    // 0x345ff4: 0x8e020118  lw          $v0, 0x118($s0)
    ctx->pc = 0x345ff4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 280)));
label_345ff8:
    // 0x345ff8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x345ff8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_345ffc:
    // 0x345ffc: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x345ffcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
label_346000:
    // 0x346000: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x346000u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_346004:
    // 0x346004: 0xe4600010  swc1        $f0, 0x10($v1)
    ctx->pc = 0x346004u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 16), bits); }
label_346008:
    // 0x346008: 0xe4600014  swc1        $f0, 0x14($v1)
    ctx->pc = 0x346008u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 20), bits); }
label_34600c:
    // 0x34600c: 0x8e020118  lw          $v0, 0x118($s0)
    ctx->pc = 0x34600cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 280)));
label_346010:
    // 0x346010: 0x8e040128  lw          $a0, 0x128($s0)
    ctx->pc = 0x346010u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 296)));
label_346014:
    // 0x346014: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x346014u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
label_346018:
    // 0x346018: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x346018u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_34601c:
    // 0x34601c: 0xac640018  sw          $a0, 0x18($v1)
    ctx->pc = 0x34601cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 24), GPR_U32(ctx, 4));
label_346020:
    // 0x346020: 0x8e020118  lw          $v0, 0x118($s0)
    ctx->pc = 0x346020u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 280)));
label_346024:
    // 0x346024: 0xc6000030  lwc1        $f0, 0x30($s0)
    ctx->pc = 0x346024u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_346028:
    // 0x346028: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x346028u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
label_34602c:
    // 0x34602c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x34602cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_346030:
    // 0x346030: 0xe460001c  swc1        $f0, 0x1C($v1)
    ctx->pc = 0x346030u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 28), bits); }
label_346034:
    // 0x346034: 0x8e040118  lw          $a0, 0x118($s0)
    ctx->pc = 0x346034u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 280)));
label_346038:
    // 0x346038: 0xc6000034  lwc1        $f0, 0x34($s0)
    ctx->pc = 0x346038u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_34603c:
    // 0x34603c: 0x2248821  addu        $s1, $s1, $a0
    ctx->pc = 0x34603cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
label_346040:
    // 0x346040: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x346040u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_346044:
    // 0x346044: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x346044u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_346048:
    // 0x346048: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x346048u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_34604c:
    // 0x34604c: 0xe4400020  swc1        $f0, 0x20($v0)
    ctx->pc = 0x34604cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 32), bits); }
label_346050:
    // 0x346050: 0x3e00008  jr          $ra
label_346054:
    if (ctx->pc == 0x346054u) {
        ctx->pc = 0x346054u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x346050u;
        // 0x346054: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x346058u;
        goto label_fallthrough_0x346050;
    }
    ctx->pc = 0x346050u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x346054u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x346050u;
        // 0x346054: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x346050u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x346050:
    ctx->pc = 0x346058u;
}
