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

// Function: sub_001BB8C0
// Address: 0x1bb8c0 - 0x1bb970
void sub_001BB8C0_0x1bb8c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001BB8C0_0x1bb8c0");
#endif

    ctx->pc = 0x1bb8c0u;

    // 0x1bb8c0: 0x14a00012  bnez        $a1, . + 4 + (0x12 << 2)
    ctx->pc = 0x1BB8C0u;
    {
        const bool branch_taken_0x1bb8c0 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x1BB8C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BB8C0u;
        // 0x1bb8c4: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bb8c0) {
            ctx->pc = 0x1BB90Cu;
            goto label_1bb90c;
        }
    }
    ctx->pc = 0x1BB8C8u;
    // 0x1bb8c8: 0x3c014000  lui         $at, 0x4000
    ctx->pc = 0x1bb8c8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16384 << 16));
    // 0x1bb8cc: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x1bb8ccu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x1bb8d0: 0x3c0140c0  lui         $at, 0x40C0
    ctx->pc = 0x1bb8d0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16576 << 16));
    // 0x1bb8d4: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x1bb8d4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1bb8d8: 0x3c014060  lui         $at, 0x4060
    ctx->pc = 0x1bb8d8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16480 << 16));
    // 0x1bb8dc: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1bb8dcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1bb8e0: 0x3c014080  lui         $at, 0x4080
    ctx->pc = 0x1bb8e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16512 << 16));
    // 0x1bb8e4: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1bb8e4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1bb8e8: 0xe4c0004c  swc1        $f0, 0x4C($a2)
    ctx->pc = 0x1bb8e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 76), bits); }
    // 0x1bb8ec: 0xe4c10054  swc1        $f1, 0x54($a2)
    ctx->pc = 0x1bb8ecu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 84), bits); }
    // 0x1bb8f0: 0xe4c20058  swc1        $f2, 0x58($a2)
    ctx->pc = 0x1bb8f0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 88), bits); }
    // 0x1bb8f4: 0xe4c30048  swc1        $f3, 0x48($a2)
    ctx->pc = 0x1bb8f4u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 72), bits); }
    // 0x1bb8f8: 0xe4c20050  swc1        $f2, 0x50($a2)
    ctx->pc = 0x1bb8f8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 80), bits); }
    // 0x1bb8fc: 0x8cc20070  lw          $v0, 0x70($a2)
    ctx->pc = 0x1bb8fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 112)));
    // 0x1bb900: 0x8c430fe8  lw          $v1, 0xFE8($v0)
    ctx->pc = 0x1bb900u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4072)));
    // 0x1bb904: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x1BB904u;
    {
        const bool branch_taken_0x1bb904 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BB908u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BB904u;
        // 0x1bb908: 0xe4630350  swc1        $f3, 0x350($v1) (Delay Slot)
        { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 848), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bb904) {
            ctx->pc = 0x1BB95Cu;
            goto label_1bb95c;
        }
    }
    ctx->pc = 0x1BB90Cu;
label_1bb90c:
    // 0x1bb90c: 0x3c013fc0  lui         $at, 0x3FC0
    ctx->pc = 0x1bb90cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16320 << 16));
    // 0x1bb910: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x1bb910u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x1bb914: 0x3c01400c  lui         $at, 0x400C
    ctx->pc = 0x1bb914u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16396 << 16));
    // 0x1bb918: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x1bb918u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x1bb91c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1bb91cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1bb920: 0x3c013fe6  lui         $at, 0x3FE6
    ctx->pc = 0x1bb920u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16358 << 16));
    // 0x1bb924: 0x34216666  ori         $at, $at, 0x6666
    ctx->pc = 0x1bb924u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)26214);
    // 0x1bb928: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x1bb928u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1bb92c: 0x3c014020  lui         $at, 0x4020
    ctx->pc = 0x1bb92cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16416 << 16));
    // 0x1bb930: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x1bb930u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x1bb934: 0x3c014040  lui         $at, 0x4040
    ctx->pc = 0x1bb934u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16448 << 16));
    // 0x1bb938: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1bb938u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1bb93c: 0xe4c00054  swc1        $f0, 0x54($a2)
    ctx->pc = 0x1bb93cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 84), bits); }
    // 0x1bb940: 0xe4c2004c  swc1        $f2, 0x4C($a2)
    ctx->pc = 0x1bb940u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 76), bits); }
    // 0x1bb944: 0xe4c30050  swc1        $f3, 0x50($a2)
    ctx->pc = 0x1bb944u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 80), bits); }
    // 0x1bb948: 0xe4c10058  swc1        $f1, 0x58($a2)
    ctx->pc = 0x1bb948u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 88), bits); }
    // 0x1bb94c: 0xe4c40048  swc1        $f4, 0x48($a2)
    ctx->pc = 0x1bb94cu;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 72), bits); }
    // 0x1bb950: 0x8cc20070  lw          $v0, 0x70($a2)
    ctx->pc = 0x1bb950u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 112)));
    // 0x1bb954: 0x8c430fe8  lw          $v1, 0xFE8($v0)
    ctx->pc = 0x1bb954u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4072)));
    // 0x1bb958: 0xe4640350  swc1        $f4, 0x350($v1)
    ctx->pc = 0x1bb958u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 848), bits); }
label_1bb95c:
    // 0x1bb95c: 0x8cc40070  lw          $a0, 0x70($a2)
    ctx->pc = 0x1bb95cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 112)));
    // 0x1bb960: 0xc4c00054  lwc1        $f0, 0x54($a2)
    ctx->pc = 0x1bb960u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1bb964: 0x8c820fe8  lw          $v0, 0xFE8($a0)
    ctx->pc = 0x1bb964u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4072)));
    // 0x1bb968: 0x3e00008  jr          $ra
    ctx->pc = 0x1BB968u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BB96Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BB968u;
        // 0x1bb96c: 0xe4400354  swc1        $f0, 0x354($v0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 852), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1BB968u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1BB970u;
}
