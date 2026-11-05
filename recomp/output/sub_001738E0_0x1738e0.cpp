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

// Function: sub_001738E0
// Address: 0x1738e0 - 0x173960
void sub_001738E0_0x1738e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001738E0_0x1738e0");
#endif

    switch (ctx->pc) {
        case 0x1738e0u: goto label_1738e0;
        case 0x1738e4u: goto label_1738e4;
        case 0x1738e8u: goto label_1738e8;
        case 0x1738ecu: goto label_1738ec;
        case 0x1738f0u: goto label_1738f0;
        case 0x1738f4u: goto label_1738f4;
        case 0x1738f8u: goto label_1738f8;
        case 0x1738fcu: goto label_1738fc;
        case 0x173900u: goto label_173900;
        case 0x173904u: goto label_173904;
        case 0x173908u: goto label_173908;
        case 0x17390cu: goto label_17390c;
        case 0x173910u: goto label_173910;
        case 0x173914u: goto label_173914;
        case 0x173918u: goto label_173918;
        case 0x17391cu: goto label_17391c;
        case 0x173920u: goto label_173920;
        case 0x173924u: goto label_173924;
        case 0x173928u: goto label_173928;
        case 0x17392cu: goto label_17392c;
        case 0x173930u: goto label_173930;
        case 0x173934u: goto label_173934;
        case 0x173938u: goto label_173938;
        case 0x17393cu: goto label_17393c;
        case 0x173940u: goto label_173940;
        case 0x173944u: goto label_173944;
        case 0x173948u: goto label_173948;
        case 0x17394cu: goto label_17394c;
        case 0x173950u: goto label_173950;
        case 0x173954u: goto label_173954;
        case 0x173958u: goto label_173958;
        case 0x17395cu: goto label_17395c;
        default: break;
    }

    ctx->pc = 0x1738e0u;

label_1738e0:
    // 0x1738e0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1738e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_1738e4:
    // 0x1738e4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1738e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_1738e8:
    // 0x1738e8: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1738e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_1738ec:
    // 0x1738ec: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1738ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_1738f0:
    // 0x1738f0: 0xc04f990  jal         func_13E640
label_1738f4:
    if (ctx->pc == 0x1738F4u) {
        ctx->pc = 0x1738F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1738F0u;
        // 0x1738f4: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1738F8u;
        goto label_1738f8;
    }
    ctx->pc = 0x1738F0u;
    SET_GPR_U32(ctx, 31, 0x1738F8u);
    ctx->pc = 0x1738F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1738F0u;
    // 0x1738f4: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13E640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13E640u, 0x1738F0u, 0x1738F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1738F8u;
label_1738f8:
    // 0x1738f8: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x1738f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_1738fc:
    // 0x1738fc: 0x24050016  addiu       $a1, $zero, 0x16
    ctx->pc = 0x1738fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
label_173900:
    // 0x173900: 0xae0300b4  sw          $v1, 0xB4($s0)
    ctx->pc = 0x173900u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 180), GPR_U32(ctx, 3));
label_173904:
    // 0x173904: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x173904u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_173908:
    // 0x173908: 0xc04f8fc  jal         func_13E3F0
label_17390c:
    if (ctx->pc == 0x17390Cu) {
        ctx->pc = 0x17390Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x173908u;
        // 0x17390c: 0xae0200b0  sw          $v0, 0xB0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 176), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x173910u;
        goto label_173910;
    }
    ctx->pc = 0x173908u;
    SET_GPR_U32(ctx, 31, 0x173910u);
    ctx->pc = 0x17390Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x173908u;
    // 0x17390c: 0xae0200b0  sw          $v0, 0xB0($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 176), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13E3F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13E3F0u, 0x173908u, 0x173910u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x173910u;
label_173910:
    // 0x173910: 0x8e04005c  lw          $a0, 0x5C($s0)
    ctx->pc = 0x173910u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 92)));
label_173914:
    // 0x173914: 0xc05a5fe  jal         func_1697F8
label_173918:
    if (ctx->pc == 0x173918u) {
        ctx->pc = 0x173918u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x173914u;
        // 0x173918: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17391Cu;
        goto label_17391c;
    }
    ctx->pc = 0x173914u;
    SET_GPR_U32(ctx, 31, 0x17391Cu);
    ctx->pc = 0x173918u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x173914u;
    // 0x173918: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1697F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1697F8u, 0x173914u, 0x17391Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17391Cu;
label_17391c:
    // 0x17391c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x17391cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_173920:
    // 0x173920: 0xc0461e8  jal         func_1187A0
label_173924:
    if (ctx->pc == 0x173924u) {
        ctx->pc = 0x173924u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x173920u;
        // 0x173924: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x173928u;
        goto label_173928;
    }
    ctx->pc = 0x173920u;
    SET_GPR_U32(ctx, 31, 0x173928u);
    ctx->pc = 0x173924u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x173920u;
    // 0x173924: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1187A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1187A0u, 0x173920u, 0x173928u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x173928u;
label_173928:
    // 0x173928: 0x8e0400b0  lw          $a0, 0xB0($s0)
    ctx->pc = 0x173928u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 176)));
label_17392c:
    // 0x17392c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x17392cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_173930:
    // 0x173930: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x173930u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_173934:
    // 0x173934: 0x8c620028  lw          $v0, 0x28($v1)
    ctx->pc = 0x173934u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 40)));
label_173938:
    // 0x173938: 0x40f809  jalr        $v0
label_17393c:
    if (ctx->pc == 0x17393Cu) {
        ctx->pc = 0x17393Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x173938u;
        // 0x17393c: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x173940u;
        goto label_173940;
    }
    ctx->pc = 0x173938u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x173940u);
        ctx->pc = 0x17393Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x173938u;
        // 0x17393c: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x173938u, 0x173940u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x173940u;
label_173940:
    // 0x173940: 0xc6000280  lwc1        $f0, 0x280($s0)
    ctx->pc = 0x173940u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 640)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_173944:
    // 0x173944: 0x8e0200b0  lw          $v0, 0xB0($s0)
    ctx->pc = 0x173944u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 176)));
label_173948:
    // 0x173948: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x173948u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_17394c:
    // 0x17394c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x17394cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_173950:
    // 0x173950: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x173950u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_173954:
    // 0x173954: 0xe44002e4  swc1        $f0, 0x2E4($v0)
    ctx->pc = 0x173954u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 740), bits); }
label_173958:
    // 0x173958: 0x3e00008  jr          $ra
label_17395c:
    if (ctx->pc == 0x17395Cu) {
        ctx->pc = 0x17395Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x173958u;
        // 0x17395c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x173960u;
        goto label_fallthrough_0x173958;
    }
    ctx->pc = 0x173958u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17395Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x173958u;
        // 0x17395c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x173958u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x173958:
    ctx->pc = 0x173960u;
}
