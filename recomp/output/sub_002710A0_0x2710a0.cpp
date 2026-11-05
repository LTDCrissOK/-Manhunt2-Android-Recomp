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

// Function: sub_002710A0
// Address: 0x2710a0 - 0x271170
void sub_002710A0_0x2710a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002710A0_0x2710a0");
#endif

    switch (ctx->pc) {
        case 0x2710b8u: goto label_2710b8;
        case 0x2710d0u: goto label_2710d0;
        case 0x2710fcu: goto label_2710fc;
        case 0x27113cu: goto label_27113c;
        default: break;
    }

    ctx->pc = 0x2710a0u;

    // 0x2710a0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2710a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2710a4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2710a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2710a8: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2710a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2710ac: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2710acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2710b0: 0xc0835aa  jal         func_20D6A8
    ctx->pc = 0x2710B0u;
    SET_GPR_U32(ctx, 31, 0x2710B8u);
    ctx->pc = 0x2710B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2710B0u;
    // 0x2710b4: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20D6A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20D6A8u, 0x2710B0u, 0x2710B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2710B8u;
label_2710b8:
    // 0x2710b8: 0x26110220  addiu       $s1, $s0, 0x220
    ctx->pc = 0x2710b8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 544));
    // 0x2710bc: 0x3c030043  lui         $v1, 0x43
    ctx->pc = 0x2710bcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)67 << 16));
    // 0x2710c0: 0x26040260  addiu       $a0, $s0, 0x260
    ctx->pc = 0x2710c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 608));
    // 0x2710c4: 0x246329f8  addiu       $v1, $v1, 0x29F8
    ctx->pc = 0x2710c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 10744));
    // 0x2710c8: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x2710C8u;
    SET_GPR_U32(ctx, 31, 0x2710D0u);
    ctx->pc = 0x2710CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2710C8u;
    // 0x2710cc: 0xae030218  sw          $v1, 0x218($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 536), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x2710C8u, 0x2710D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2710D0u;
label_2710d0:
    // 0x2710d0: 0xae200030  sw          $zero, 0x30($s1)
    ctx->pc = 0x2710d0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 48), GPR_U32(ctx, 0));
    // 0x2710d4: 0xae200020  sw          $zero, 0x20($s1)
    ctx->pc = 0x2710d4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 32), GPR_U32(ctx, 0));
    // 0x2710d8: 0x7e000230  sq          $zero, 0x230($s0)
    ctx->pc = 0x2710d8u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 560), GPR_VEC(ctx, 0));
    // 0x2710dc: 0x7e000260  sq          $zero, 0x260($s0)
    ctx->pc = 0x2710dcu;
    WRITE128(ADD32(GPR_U32(ctx, 16), 608), GPR_VEC(ctx, 0));
    // 0x2710e0: 0xa2000270  sb          $zero, 0x270($s0)
    ctx->pc = 0x2710e0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 624), (uint8_t)GPR_U32(ctx, 0));
    // 0x2710e4: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x2710e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x2710e8: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x2710e8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x2710ec: 0x26040278  addiu       $a0, $s0, 0x278
    ctx->pc = 0x2710ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 632));
    // 0x2710f0: 0x24a57e78  addiu       $a1, $a1, 0x7E78
    ctx->pc = 0x2710f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 32376));
    // 0x2710f4: 0xc0d7424  jal         func_35D090
    ctx->pc = 0x2710F4u;
    SET_GPR_U32(ctx, 31, 0x2710FCu);
    ctx->pc = 0x2710F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2710F4u;
    // 0x2710f8: 0xae020274  sw          $v0, 0x274($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 628), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D090u, 0x2710F4u, 0x2710FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2710FCu;
label_2710fc:
    // 0x2710fc: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2710fcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x271100: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x271100u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x271104: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x271104u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x271108: 0xae000280  sw          $zero, 0x280($s0)
    ctx->pc = 0x271108u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 640), GPR_U32(ctx, 0));
    // 0x27110c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x27110cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x271110: 0xae000290  sw          $zero, 0x290($s0)
    ctx->pc = 0x271110u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 656), GPR_U32(ctx, 0));
    // 0x271114: 0xae000298  sw          $zero, 0x298($s0)
    ctx->pc = 0x271114u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 664), GPR_U32(ctx, 0));
    // 0x271118: 0xae00029c  sw          $zero, 0x29C($s0)
    ctx->pc = 0x271118u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 668), GPR_U32(ctx, 0));
    // 0x27111c: 0xa20002a0  sb          $zero, 0x2A0($s0)
    ctx->pc = 0x27111cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 672), (uint8_t)GPR_U32(ctx, 0));
    // 0x271120: 0xae0002a4  sw          $zero, 0x2A4($s0)
    ctx->pc = 0x271120u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 676), GPR_U32(ctx, 0));
    // 0x271124: 0xae0002a8  sw          $zero, 0x2A8($s0)
    ctx->pc = 0x271124u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 680), GPR_U32(ctx, 0));
    // 0x271128: 0xae020288  sw          $v0, 0x288($s0)
    ctx->pc = 0x271128u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 648), GPR_U32(ctx, 2));
    // 0x27112c: 0xe60002ac  swc1        $f0, 0x2AC($s0)
    ctx->pc = 0x27112cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 684), bits); }
    // 0x271130: 0xae020284  sw          $v0, 0x284($s0)
    ctx->pc = 0x271130u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 644), GPR_U32(ctx, 2));
    // 0x271134: 0xc09c45c  jal         func_271170
    ctx->pc = 0x271134u;
    SET_GPR_U32(ctx, 31, 0x27113Cu);
    ctx->pc = 0x271138u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x271134u;
    // 0x271138: 0xe6000294  swc1        $f0, 0x294($s0) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 660), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x271170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x271170u, 0x271134u, 0x27113Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27113Cu;
label_27113c:
    // 0x27113c: 0x3c050040  lui         $a1, 0x40
    ctx->pc = 0x27113cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)64 << 16));
    // 0x271140: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x271140u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x271144: 0x8ca49df0  lw          $a0, -0x6210($a1)
    ctx->pc = 0x271144u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x3F9DF0u));
    // 0x271148: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x271148u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x27114c: 0xae0402b0  sw          $a0, 0x2B0($s0)
    ctx->pc = 0x27114cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 688), GPR_U32(ctx, 4));
    // 0x271150: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x271150u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x271154: 0x8ca39df0  lw          $v1, -0x6210($a1)
    ctx->pc = 0x271154u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3F9DF0u));
    // 0x271158: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x271158u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x27115c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x27115cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x271160: 0xaca39df0  sw          $v1, -0x6210($a1)
    ctx->pc = 0x271160u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x3F9DF0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3F9DF0u, _value); } while (0);
    // 0x271164: 0x3e00008  jr          $ra
    ctx->pc = 0x271164u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x271168u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x271164u;
        // 0x271168: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x271164u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x27116Cu;
    // 0x27116c: 0x0  nop
    ctx->pc = 0x27116cu;
    // NOP
    ctx->pc = 0x271170u;
}
