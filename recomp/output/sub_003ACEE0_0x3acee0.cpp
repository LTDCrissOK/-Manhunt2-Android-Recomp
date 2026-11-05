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

// Function: sub_003ACEE0
// Address: 0x3acee0 - 0x3acf80
void sub_003ACEE0_0x3acee0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003ACEE0_0x3acee0");
#endif

    switch (ctx->pc) {
        case 0x3acf04u: goto label_3acf04;
        case 0x3acf40u: goto label_3acf40;
        case 0x3acf5cu: goto label_3acf5c;
        default: break;
    }

    ctx->pc = 0x3acee0u;

    // 0x3acee0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3acee0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3acee4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3acee4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x3acee8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3acee8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3aceec: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x3aceecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x3acef0: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x3acef0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3acef4: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x3acef4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x3acef8: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x3acef8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x3acefc: 0xc0eb26e  jal         func_3AC9B8
    ctx->pc = 0x3ACEFCu;
    SET_GPR_U32(ctx, 31, 0x3ACF04u);
    ctx->pc = 0x3ACF00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3ACEFCu;
    // 0x3acf00: 0xc0902d  daddu       $s2, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3AC9B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AC9B8u, 0x3ACEFCu, 0x3ACF04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3ACF04u;
label_3acf04:
    // 0x3acf04: 0x3c020066  lui         $v0, 0x66
    ctx->pc = 0x3acf04u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)102 << 16));
    // 0x3acf08: 0x1080c0  sll         $s0, $s0, 3
    ctx->pc = 0x3acf08u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
    // 0x3acf0c: 0x24429160  addiu       $v0, $v0, -0x6EA0
    ctx->pc = 0x3acf0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294938976));
    // 0x3acf10: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x3acf10u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3acf14: 0x501821  addu        $v1, $v0, $s0
    ctx->pc = 0x3acf14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x3acf18: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x3acf18u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x3acf1c: 0xae110000  sw          $s1, 0x0($s0)
    ctx->pc = 0x3acf1cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 17));
    // 0x3acf20: 0xac720004  sw          $s2, 0x4($v1)
    ctx->pc = 0x3acf20u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 18));
    // 0x3acf24: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3acf24u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3acf28: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x3acf28u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x3acf2c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x3acf2cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3acf30: 0x80eb274  j           func_3AC9D0
    ctx->pc = 0x3ACF30u;
    ctx->pc = 0x3ACF34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3ACF30u;
    // 0x3acf34: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3AC9D0u;
    sub_003AC9D0_0x3ac9d0(rdram, ctx, runtime); return;
    ctx->pc = 0x3ACF38u;
    // 0x3acf38: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x3acf38u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x3acf3c: 0x0  nop
    ctx->pc = 0x3acf3cu;
    // NOP
label_3acf40:
    // 0x3acf40: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3acf40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3acf44: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3acf44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x3acf48: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x3acf48u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3acf4c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x3acf4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x3acf50: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3acf50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x3acf54: 0xc0eb26e  jal         func_3AC9B8
    ctx->pc = 0x3ACF54u;
    SET_GPR_U32(ctx, 31, 0x3ACF5Cu);
    ctx->pc = 0x3ACF58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3ACF54u;
    // 0x3acf58: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3AC9B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AC9B8u, 0x3ACF54u, 0x3ACF5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3ACF5Cu;
label_3acf5c:
    // 0x3acf5c: 0x3c020066  lui         $v0, 0x66
    ctx->pc = 0x3acf5cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)102 << 16));
    // 0x3acf60: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3acf60u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3acf64: 0x244291b0  addiu       $v0, $v0, -0x6E50
    ctx->pc = 0x3acf64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294939056));
    // 0x3acf68: 0xac500004  sw          $s0, 0x4($v0)
    ctx->pc = 0x3acf68u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 16)); ps2TraceGuestWrite(rdram, 0x6591B4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6591B4u, _value); } while (0);
    // 0x3acf6c: 0xac510000  sw          $s1, 0x0($v0)
    ctx->pc = 0x3acf6cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 17)); ps2TraceGuestWrite(rdram, 0x6591B0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6591B0u, _value); } while (0);
    // 0x3acf70: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3acf70u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3acf74: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x3acf74u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x3acf78: 0x80eb274  j           func_3AC9D0
    ctx->pc = 0x3ACF78u;
    ctx->pc = 0x3ACF7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3ACF78u;
    // 0x3acf7c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3AC9D0u;
    sub_003AC9D0_0x3ac9d0(rdram, ctx, runtime); return;
    ctx->pc = 0x3ACF80u;
}
