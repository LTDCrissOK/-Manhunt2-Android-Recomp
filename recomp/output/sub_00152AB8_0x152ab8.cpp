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

// Function: sub_00152AB8
// Address: 0x152ab8 - 0x152b30
void sub_00152AB8_0x152ab8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00152AB8_0x152ab8");
#endif

    switch (ctx->pc) {
        case 0x152adcu: goto label_152adc;
        case 0x152ae8u: goto label_152ae8;
        case 0x152af4u: goto label_152af4;
        case 0x152b0cu: goto label_152b0c;
        case 0x152b1cu: goto label_152b1c;
        default: break;
    }

    ctx->pc = 0x152ab8u;

    // 0x152ab8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x152ab8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x152abc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x152abcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x152ac0: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x152ac0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x152ac4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x152ac4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x152ac8: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x152ac8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x152acc: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x152accu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x152ad0: 0xae060468  sw          $a2, 0x468($s0)
    ctx->pc = 0x152ad0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1128), GPR_U32(ctx, 6));
    // 0x152ad4: 0xc0461fe  jal         func_1187F8
    ctx->pc = 0x152AD4u;
    SET_GPR_U32(ctx, 31, 0x152ADCu);
    ctx->pc = 0x152AD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x152AD4u;
    // 0x152ad8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1187F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1187F8u, 0x152AD4u, 0x152ADCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x152ADCu;
label_152adc:
    // 0x152adc: 0xae020520  sw          $v0, 0x520($s0)
    ctx->pc = 0x152adcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1312), GPR_U32(ctx, 2));
    // 0x152ae0: 0xc0462b0  jal         func_118AC0
    ctx->pc = 0x152AE0u;
    SET_GPR_U32(ctx, 31, 0x152AE8u);
    ctx->pc = 0x152AE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x152AE0u;
    // 0x152ae4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118AC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118AC0u, 0x152AE0u, 0x152AE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x152AE8u;
label_152ae8:
    // 0x152ae8: 0xe6000524  swc1        $f0, 0x524($s0)
    ctx->pc = 0x152ae8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1316), bits); }
    // 0x152aec: 0xc046272  jal         func_1189C8
    ctx->pc = 0x152AECu;
    SET_GPR_U32(ctx, 31, 0x152AF4u);
    ctx->pc = 0x152AF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x152AECu;
    // 0x152af0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1189C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1189C8u, 0x152AECu, 0x152AF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x152AF4u;
label_152af4:
    // 0x152af4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x152af4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x152af8: 0x0  nop
    ctx->pc = 0x152af8u;
    // NOP
    // 0x152afc: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x152afcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x152b00: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x152b00u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x152b04: 0xc045eee  jal         func_117BB8
    ctx->pc = 0x152B04u;
    SET_GPR_U32(ctx, 31, 0x152B0Cu);
    ctx->pc = 0x152B08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x152B04u;
    // 0x152b08: 0xe6000528  swc1        $f0, 0x528($s0) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1320), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x117BB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x117BB8u, 0x152B04u, 0x152B0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x152B0Cu;
label_152b0c:
    // 0x152b0c: 0x3c040049  lui         $a0, 0x49
    ctx->pc = 0x152b0cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)73 << 16));
    // 0x152b10: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x152b10u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x152b14: 0xc042136  jal         func_1084D8
    ctx->pc = 0x152B14u;
    SET_GPR_U32(ctx, 31, 0x152B1Cu);
    ctx->pc = 0x152B18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x152B14u;
    // 0x152b18: 0x24848758  addiu       $a0, $a0, -0x78A8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294936408));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1084D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1084D8u, 0x152B14u, 0x152B1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x152B1Cu;
label_152b1c:
    // 0x152b1c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x152b1cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x152b20: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x152b20u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x152b24: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x152b24u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x152b28: 0x3e00008  jr          $ra
    ctx->pc = 0x152B28u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x152B2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x152B28u;
        // 0x152b2c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x152B28u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x152B30u;
}
