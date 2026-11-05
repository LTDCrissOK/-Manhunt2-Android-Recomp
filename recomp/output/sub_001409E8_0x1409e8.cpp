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

// Function: sub_001409E8
// Address: 0x1409e8 - 0x140a68
void sub_001409E8_0x1409e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001409E8_0x1409e8");
#endif

    switch (ctx->pc) {
        case 0x140a0cu: goto label_140a0c;
        case 0x140a18u: goto label_140a18;
        case 0x140a24u: goto label_140a24;
        case 0x140a30u: goto label_140a30;
        case 0x140a40u: goto label_140a40;
        case 0x140a50u: goto label_140a50;
        default: break;
    }

    ctx->pc = 0x1409e8u;

    // 0x1409e8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1409e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1409ec: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1409ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1409f0: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1409f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1409f4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1409f4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1409f8: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1409f8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1409fc: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1409fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x140a00: 0xae060468  sw          $a2, 0x468($s0)
    ctx->pc = 0x140a00u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1128), GPR_U32(ctx, 6));
    // 0x140a04: 0xc046002  jal         func_118008
    ctx->pc = 0x140A04u;
    SET_GPR_U32(ctx, 31, 0x140A0Cu);
    ctx->pc = 0x140A08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x140A04u;
    // 0x140a08: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118008u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118008u, 0x140A04u, 0x140A0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x140A0Cu;
label_140a0c:
    // 0x140a0c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x140a0cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x140a10: 0xc046272  jal         func_1189C8
    ctx->pc = 0x140A10u;
    SET_GPR_U32(ctx, 31, 0x140A18u);
    ctx->pc = 0x140A14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x140A10u;
    // 0x140a14: 0xae020524  sw          $v0, 0x524($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 1316), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1189C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1189C8u, 0x140A10u, 0x140A18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x140A18u;
label_140a18:
    // 0x140a18: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x140a18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x140a1c: 0xc04611e  jal         func_118478
    ctx->pc = 0x140A1Cu;
    SET_GPR_U32(ctx, 31, 0x140A24u);
    ctx->pc = 0x140A20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x140A1Cu;
    // 0x140a20: 0xae020528  sw          $v0, 0x528($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 1320), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118478u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118478u, 0x140A1Cu, 0x140A24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x140A24u;
label_140a24:
    // 0x140a24: 0xae02052c  sw          $v0, 0x52C($s0)
    ctx->pc = 0x140a24u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1324), GPR_U32(ctx, 2));
    // 0x140a28: 0xc0462b0  jal         func_118AC0
    ctx->pc = 0x140A28u;
    SET_GPR_U32(ctx, 31, 0x140A30u);
    ctx->pc = 0x140A2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x140A28u;
    // 0x140a2c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118AC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118AC0u, 0x140A28u, 0x140A30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x140A30u;
label_140a30:
    // 0x140a30: 0x46000002  mul.s       $f0, $f0, $f0
    ctx->pc = 0x140a30u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x140a34: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x140a34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x140a38: 0xc045eee  jal         func_117BB8
    ctx->pc = 0x140A38u;
    SET_GPR_U32(ctx, 31, 0x140A40u);
    ctx->pc = 0x140A3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x140A38u;
    // 0x140a3c: 0xe6000530  swc1        $f0, 0x530($s0) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1328), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x117BB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x117BB8u, 0x140A38u, 0x140A40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x140A40u;
label_140a40:
    // 0x140a40: 0x3c040049  lui         $a0, 0x49
    ctx->pc = 0x140a40u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)73 << 16));
    // 0x140a44: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x140a44u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x140a48: 0xc042136  jal         func_1084D8
    ctx->pc = 0x140A48u;
    SET_GPR_U32(ctx, 31, 0x140A50u);
    ctx->pc = 0x140A4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x140A48u;
    // 0x140a4c: 0x24848758  addiu       $a0, $a0, -0x78A8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294936408));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1084D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1084D8u, 0x140A48u, 0x140A50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x140A50u;
label_140a50:
    // 0x140a50: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x140a50u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x140a54: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x140a54u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x140a58: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x140a58u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x140a5c: 0x3e00008  jr          $ra
    ctx->pc = 0x140A5Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x140A60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x140A5Cu;
        // 0x140a60: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x140A5Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x140A64u;
    // 0x140a64: 0x0  nop
    ctx->pc = 0x140a64u;
    // NOP
    ctx->pc = 0x140a68u;
}
