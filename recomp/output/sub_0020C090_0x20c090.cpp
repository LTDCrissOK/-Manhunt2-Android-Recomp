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

// Function: sub_0020C090
// Address: 0x20c090 - 0x20c128
void sub_0020C090_0x20c090(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0020C090_0x20c090");
#endif

    switch (ctx->pc) {
        case 0x20c0b0u: goto label_20c0b0;
        case 0x20c0bcu: goto label_20c0bc;
        case 0x20c0c8u: goto label_20c0c8;
        case 0x20c0e0u: goto label_20c0e0;
        case 0x20c0f8u: goto label_20c0f8;
        case 0x20c104u: goto label_20c104;
        case 0x20c110u: goto label_20c110;
        default: break;
    }

    ctx->pc = 0x20c090u;

    // 0x20c090: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x20c090u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x20c094: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x20c094u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x20c098: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x20c098u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x20c09c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x20c09cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20c0a0: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x20c0a0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20c0a4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x20c0a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x20c0a8: 0xc083062  jal         func_20C188
    ctx->pc = 0x20C0A8u;
    SET_GPR_U32(ctx, 31, 0x20C0B0u);
    ctx->pc = 0x20C0ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20C0A8u;
    // 0x20c0ac: 0x26040010  addiu       $a0, $s0, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20C188u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20C188u, 0x20C0A8u, 0x20C0B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20C0B0u;
label_20c0b0:
    // 0x20c0b0: 0x26040018  addiu       $a0, $s0, 0x18
    ctx->pc = 0x20c0b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 24));
    // 0x20c0b4: 0xc083062  jal         func_20C188
    ctx->pc = 0x20C0B4u;
    SET_GPR_U32(ctx, 31, 0x20C0BCu);
    ctx->pc = 0x20C0B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20C0B4u;
    // 0x20c0b8: 0xe6200000  swc1        $f0, 0x0($s1) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x20C188u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20C188u, 0x20C0B4u, 0x20C0BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20C0BCu;
label_20c0bc:
    // 0x20c0bc: 0xe6200004  swc1        $f0, 0x4($s1)
    ctx->pc = 0x20c0bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4), bits); }
    // 0x20c0c0: 0xc083062  jal         func_20C188
    ctx->pc = 0x20C0C0u;
    SET_GPR_U32(ctx, 31, 0x20C0C8u);
    ctx->pc = 0x20C0C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20C0C0u;
    // 0x20c0c4: 0x26040020  addiu       $a0, $s0, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20C188u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20C188u, 0x20C0C0u, 0x20C0C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20C0C8u;
label_20c0c8:
    // 0x20c0c8: 0xe6200008  swc1        $f0, 0x8($s1)
    ctx->pc = 0x20c0c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 8), bits); }
    // 0x20c0cc: 0x92020028  lbu         $v0, 0x28($s0)
    ctx->pc = 0x20c0ccu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 40)));
    // 0x20c0d0: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x20C0D0u;
    {
        const bool branch_taken_0x20c0d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x20c0d0) {
            ctx->pc = 0x20C0F0u;
            goto label_20c0f0;
        }
    }
    ctx->pc = 0x20C0D8u;
    // 0x20c0d8: 0xc083062  jal         func_20C188
    ctx->pc = 0x20C0D8u;
    SET_GPR_U32(ctx, 31, 0x20C0E0u);
    ctx->pc = 0x20C0DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20C0D8u;
    // 0x20c0dc: 0x2604002c  addiu       $a0, $s0, 0x2C (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 44));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20C188u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20C188u, 0x20C0D8u, 0x20C0E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20C0E0u;
label_20c0e0:
    // 0x20c0e0: 0xe6200018  swc1        $f0, 0x18($s1)
    ctx->pc = 0x20c0e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 24), bits); }
    // 0x20c0e4: 0xe6200010  swc1        $f0, 0x10($s1)
    ctx->pc = 0x20c0e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 16), bits); }
    // 0x20c0e8: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x20C0E8u;
    {
        const bool branch_taken_0x20c0e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20C0ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20C0E8u;
        // 0x20c0ec: 0xe6200014  swc1        $f0, 0x14($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 20), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x20c0e8) {
            ctx->pc = 0x20C114u;
            goto label_20c114;
        }
    }
    ctx->pc = 0x20C0F0u;
label_20c0f0:
    // 0x20c0f0: 0xc083062  jal         func_20C188
    ctx->pc = 0x20C0F0u;
    SET_GPR_U32(ctx, 31, 0x20C0F8u);
    ctx->pc = 0x20C0F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20C0F0u;
    // 0x20c0f4: 0x2604002c  addiu       $a0, $s0, 0x2C (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 44));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20C188u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20C188u, 0x20C0F0u, 0x20C0F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20C0F8u;
label_20c0f8:
    // 0x20c0f8: 0x26040034  addiu       $a0, $s0, 0x34
    ctx->pc = 0x20c0f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 52));
    // 0x20c0fc: 0xc083062  jal         func_20C188
    ctx->pc = 0x20C0FCu;
    SET_GPR_U32(ctx, 31, 0x20C104u);
    ctx->pc = 0x20C100u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20C0FCu;
    // 0x20c100: 0xe6200010  swc1        $f0, 0x10($s1) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 16), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x20C188u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20C188u, 0x20C0FCu, 0x20C104u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20C104u;
label_20c104:
    // 0x20c104: 0xe6200014  swc1        $f0, 0x14($s1)
    ctx->pc = 0x20c104u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 20), bits); }
    // 0x20c108: 0xc083062  jal         func_20C188
    ctx->pc = 0x20C108u;
    SET_GPR_U32(ctx, 31, 0x20C110u);
    ctx->pc = 0x20C10Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20C108u;
    // 0x20c10c: 0x2604003c  addiu       $a0, $s0, 0x3C (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 60));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20C188u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20C188u, 0x20C108u, 0x20C110u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20C110u;
label_20c110:
    // 0x20c110: 0xe6200018  swc1        $f0, 0x18($s1)
    ctx->pc = 0x20c110u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 24), bits); }
label_20c114:
    // 0x20c114: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x20c114u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x20c118: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x20c118u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x20c11c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x20c11cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x20c120: 0x3e00008  jr          $ra
    ctx->pc = 0x20C120u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20C124u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20C120u;
        // 0x20c124: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20C120u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x20C128u;
}
