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

// Function: sub_0018A5D0
// Address: 0x18a5d0 - 0x18a648
void sub_0018A5D0_0x18a5d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0018A5D0_0x18a5d0");
#endif

    switch (ctx->pc) {
        case 0x18a5d0u: goto label_18a5d0;
        case 0x18a5d4u: goto label_18a5d4;
        case 0x18a5d8u: goto label_18a5d8;
        case 0x18a5dcu: goto label_18a5dc;
        case 0x18a5e0u: goto label_18a5e0;
        case 0x18a5e4u: goto label_18a5e4;
        case 0x18a5e8u: goto label_18a5e8;
        case 0x18a5ecu: goto label_18a5ec;
        case 0x18a5f0u: goto label_18a5f0;
        case 0x18a5f4u: goto label_18a5f4;
        case 0x18a5f8u: goto label_18a5f8;
        case 0x18a5fcu: goto label_18a5fc;
        case 0x18a600u: goto label_18a600;
        case 0x18a604u: goto label_18a604;
        case 0x18a608u: goto label_18a608;
        case 0x18a60cu: goto label_18a60c;
        case 0x18a610u: goto label_18a610;
        case 0x18a614u: goto label_18a614;
        case 0x18a618u: goto label_18a618;
        case 0x18a61cu: goto label_18a61c;
        case 0x18a620u: goto label_18a620;
        case 0x18a624u: goto label_18a624;
        case 0x18a628u: goto label_18a628;
        case 0x18a62cu: goto label_18a62c;
        case 0x18a630u: goto label_18a630;
        case 0x18a634u: goto label_18a634;
        case 0x18a638u: goto label_18a638;
        case 0x18a63cu: goto label_18a63c;
        case 0x18a640u: goto label_18a640;
        case 0x18a644u: goto label_18a644;
        default: break;
    }

    ctx->pc = 0x18a5d0u;

label_18a5d0:
    // 0x18a5d0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x18a5d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_18a5d4:
    // 0x18a5d4: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x18a5d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_18a5d8:
    // 0x18a5d8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x18a5d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_18a5dc:
    // 0x18a5dc: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x18a5dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_18a5e0:
    // 0x18a5e0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x18a5e0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_18a5e4:
    // 0x18a5e4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x18a5e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_18a5e8:
    // 0x18a5e8: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x18a5e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_18a5ec:
    // 0x18a5ec: 0x10430010  beq         $v0, $v1, . + 4 + (0x10 << 2)
label_18a5f0:
    if (ctx->pc == 0x18A5F0u) {
        ctx->pc = 0x18A5F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18A5ECu;
        // 0x18a5f0: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18A5F4u;
        goto label_18a5f4;
    }
    ctx->pc = 0x18A5ECu;
    {
        const bool branch_taken_0x18a5ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x18A5F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18A5ECu;
        // 0x18a5f0: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18a5ec) {
            ctx->pc = 0x18A630u;
            goto label_18a630;
        }
    }
    ctx->pc = 0x18A5F4u;
label_18a5f4:
    // 0x18a5f4: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x18a5f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_18a5f8:
    // 0x18a5f8: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
label_18a5fc:
    if (ctx->pc == 0x18A5FCu) {
        ctx->pc = 0x18A5FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18A5F8u;
        // 0x18a5fc: 0xae030010  sw          $v1, 0x10($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18A600u;
        goto label_18a600;
    }
    ctx->pc = 0x18A5F8u;
    {
        const bool branch_taken_0x18a5f8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x18A5FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18A5F8u;
        // 0x18a5fc: 0xae030010  sw          $v1, 0x10($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18a5f8) {
            ctx->pc = 0x18A610u;
            goto label_18a610;
        }
    }
    ctx->pc = 0x18A600u;
label_18a600:
    // 0x18a600: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x18a600u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_18a604:
    // 0x18a604: 0x8c620010  lw          $v0, 0x10($v1)
    ctx->pc = 0x18a604u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
label_18a608:
    // 0x18a608: 0x40f809  jalr        $v0
label_18a60c:
    if (ctx->pc == 0x18A60Cu) {
        ctx->pc = 0x18A610u;
        goto label_18a610;
    }
    ctx->pc = 0x18A608u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x18A610u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18A608u, 0x18A610u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x18A610u;
label_18a610:
    // 0x18a610: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x18a610u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
label_18a614:
    // 0x18a614: 0xc061a16  jal         func_186858
label_18a618:
    if (ctx->pc == 0x18A618u) {
        ctx->pc = 0x18A618u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18A614u;
        // 0x18a618: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18A61Cu;
        goto label_18a61c;
    }
    ctx->pc = 0x18A614u;
    SET_GPR_U32(ctx, 31, 0x18A61Cu);
    ctx->pc = 0x18A618u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18A614u;
    // 0x18a618: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186858u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186858u, 0x18A614u, 0x18A61Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18A61Cu;
label_18a61c:
    // 0x18a61c: 0x3c013f40  lui         $at, 0x3F40
    ctx->pc = 0x18a61cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16192 << 16));
label_18a620:
    // 0x18a620: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x18a620u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_18a624:
    // 0x18a624: 0x0  nop
    ctx->pc = 0x18a624u;
    // NOP
label_18a628:
    // 0x18a628: 0xe4400024  swc1        $f0, 0x24($v0)
    ctx->pc = 0x18a628u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 36), bits); }
label_18a62c:
    // 0x18a62c: 0xae110144  sw          $s1, 0x144($s0)
    ctx->pc = 0x18a62cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 324), GPR_U32(ctx, 17));
label_18a630:
    // 0x18a630: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x18a630u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_18a634:
    // 0x18a634: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x18a634u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_18a638:
    // 0x18a638: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x18a638u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_18a63c:
    // 0x18a63c: 0x3e00008  jr          $ra
label_18a640:
    if (ctx->pc == 0x18A640u) {
        ctx->pc = 0x18A640u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18A63Cu;
        // 0x18a640: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18A644u;
        goto label_18a644;
    }
    ctx->pc = 0x18A63Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18A640u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18A63Cu;
        // 0x18a640: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18A63Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x18A644u;
label_18a644:
    // 0x18a644: 0x0  nop
    ctx->pc = 0x18a644u;
    // NOP
    ctx->pc = 0x18a648u;
}
