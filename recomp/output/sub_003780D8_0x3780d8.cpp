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

// Function: sub_003780D8
// Address: 0x3780d8 - 0x378150
void sub_003780D8_0x3780d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003780D8_0x3780d8");
#endif

    ctx->pc = 0x3780d8u;

    // 0x3780d8: 0x9010038  j           func_40400E0
    ctx->pc = 0x3780D8u;
    ctx->pc = 0x3780DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3780D8u;
    // 0x3780dc: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40400E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40400E0u, 0x3780D8u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x3780E0u;
    // 0x3780e0: 0xb0f7000  j           func_C3DC000
    ctx->pc = 0x3780E0u;
    ctx->pc = 0x3780E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3780E0u;
    // 0x3780e4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0xC3DC000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0xC3DC000u, 0x3780E0u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x3780E8u;
    // 0x3780e8: 0x48000800  .word       0x48000800                   # INVALID     $zero, $zero, 0x800 # 00000000 <InstrIdType: R5900_COP2_NOHIGHBIT>
    ctx->pc = 0x3780e8u;
    throw std::runtime_error("Unhandled COP2 format: 0x0 at 0x3780E8 raw=0x48000800");
    // 0x3780ec: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x3780ecu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    // 0x3780f0: 0x100e7001  beq         $zero, $t6, . + 4 + (0x7001 << 2)
    ctx->pc = 0x3780F0u;
    {
        const bool branch_taken_0x3780f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 14));
        ctx->pc = 0x3780F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3780F0u;
        // 0x3780f4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3780f0) {
            ctx->pc = 0x3940F8u;
            return;
        }
    }
    ctx->pc = 0x3780F8u;
    // 0x3780f8: 0x420f001f  .word       0x420F001F                   # INVALID     $s0, $t7, 0x1F # 00000000 <InstrIdType: CPU_COP0_TLB>
    ctx->pc = 0x3780f8u;
    throw std::runtime_error("Unhandled COP0 CO-OP: 0x1F at 0x3780F8 raw=0x420F001F");
    // 0x3780fc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x3780fcu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    // 0x378100: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x378100u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
    // 0x378104: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x378104u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    // 0x378108: 0x420f0128  .word       0x420F0128                   # INVALID     $s0, $t7, 0x128 # 00000000 <InstrIdType: CPU_COP0_TLB>
    ctx->pc = 0x378108u;
    throw std::runtime_error("Unhandled COP0 CO-OP: 0x28 at 0x378108 raw=0x420F0128");
    // 0x37810c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x37810cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    // 0x378110: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x378110u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
    // 0x378114: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x378114u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    // 0x378118: 0x420f0189  .word       0x420F0189                   # INVALID     $s0, $t7, 0x189 # 00000000 <InstrIdType: CPU_COP0_TLB>
    ctx->pc = 0x378118u;
    throw std::runtime_error("Unhandled COP0 CO-OP: 0x9 at 0x378118 raw=0x420F0189");
    // 0x37811c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x37811cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    // 0x378120: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x378120u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
    // 0x378124: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x378124u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    // 0x378128: 0x90f77ff  j           func_43DDFFC
    ctx->pc = 0x378128u;
    ctx->pc = 0x37812Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x378128u;
    // 0x37812c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0x43DDFFCu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x43DDFFCu, 0x378128u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x378130u;
    // 0x378130: 0x120e7001  beq         $s0, $t6, . + 4 + (0x7001 << 2)
    ctx->pc = 0x378130u;
    {
        const bool branch_taken_0x378130 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 14));
        ctx->pc = 0x378134u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x378130u;
        // 0x378134: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x378130) {
            ctx->pc = 0x394138u;
            return;
        }
    }
    ctx->pc = 0x378138u;
    // 0x378138: 0x100802c9  beq         $zero, $t0, . + 4 + (0x2C9 << 2)
    ctx->pc = 0x378138u;
    {
        const bool branch_taken_0x378138 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 8));
        ctx->pc = 0x37813Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x378138u;
        // 0x37813c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x378138) {
            ctx->pc = 0x378C60u;
            return;
        }
    }
    ctx->pc = 0x378140u;
    // 0x378140: 0x48007800  .word       0x48007800                   # INVALID     $zero, $zero, 0x7800 # 00000000 <InstrIdType: R5900_COP2_NOHIGHBIT>
    ctx->pc = 0x378140u;
    throw std::runtime_error("Unhandled COP2 format: 0x0 at 0x378140 raw=0x48007800");
    // 0x378144: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x378144u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    // 0x378148: 0xa480038  j           func_92000E0
    ctx->pc = 0x378148u;
    ctx->pc = 0x37814Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x378148u;
    // 0x37814c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0x92000E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x92000E0u, 0x378148u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x378150u;
}
