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

// Function: sub_00149980
// Address: 0x149980 - 0x149a60
void sub_00149980_0x149980(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00149980_0x149980");
#endif

    switch (ctx->pc) {
        case 0x1499a8u: goto label_1499a8;
        case 0x1499f8u: goto label_1499f8;
        case 0x149a34u: goto label_149a34;
        default: break;
    }

    ctx->pc = 0x149980u;

    // 0x149980: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x149980u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x149984: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x149984u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x149988: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x149988u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x14998c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x14998cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x149990: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x149990u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x149994: 0x30b200ff  andi        $s2, $a1, 0xFF
    ctx->pc = 0x149994u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x149998: 0x10c00005  beqz        $a2, . + 4 + (0x5 << 2)
    ctx->pc = 0x149998u;
    {
        const bool branch_taken_0x149998 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x14999Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x149998u;
        // 0x14999c: 0xffbf0018  sd          $ra, 0x18($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x149998) {
            ctx->pc = 0x1499B0u;
            goto label_1499b0;
        }
    }
    ctx->pc = 0x1499A0u;
    // 0x1499a0: 0xc09c98c  jal         func_272630
    ctx->pc = 0x1499A0u;
    SET_GPR_U32(ctx, 31, 0x1499A8u);
    ctx->pc = 0x1499A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1499A0u;
    // 0x1499a4: 0x8e0406a0  lw          $a0, 0x6A0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1696)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x272630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x272630u, 0x1499A0u, 0x1499A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1499A8u;
label_1499a8:
    // 0x1499a8: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x1499A8u;
    {
        const bool branch_taken_0x1499a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1499ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1499A8u;
        // 0x1499ac: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1499a8) {
            ctx->pc = 0x1499FCu;
            goto label_1499fc;
        }
    }
    ctx->pc = 0x1499B0u;
label_1499b0:
    // 0x1499b0: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x1499b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1499b4: 0x121880  sll         $v1, $s2, 2
    ctx->pc = 0x1499b4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x1499b8: 0x3c040049  lui         $a0, 0x49
    ctx->pc = 0x1499b8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)73 << 16));
    // 0x1499bc: 0x3c013f8c  lui         $at, 0x3F8C
    ctx->pc = 0x1499bcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16268 << 16));
    // 0x1499c0: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x1499c0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x1499c4: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x1499c4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1499c8: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1499c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1499cc: 0x24849a08  addiu       $a0, $a0, -0x65F8
    ctx->pc = 0x1499ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941192));
    // 0x1499d0: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1499d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1499d4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1499d4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1499d8: 0x44806800  mtc1        $zero, $f13
    ctx->pc = 0x1499d8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x1499dc: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1499dcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1499e0: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x1499e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x1499e4: 0x8c830108  lw          $v1, 0x108($a0)
    ctx->pc = 0x1499e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 264)));
    // 0x1499e8: 0x8c620104  lw          $v0, 0x104($v1)
    ctx->pc = 0x1499e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 260)));
    // 0x1499ec: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x1499ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1499f0: 0xc09c920  jal         func_272480
    ctx->pc = 0x1499F0u;
    SET_GPR_U32(ctx, 31, 0x1499F8u);
    ctx->pc = 0x1499F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1499F0u;
    // 0x1499f4: 0x24840070  addiu       $a0, $a0, 0x70 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 112));
    ctx->in_delay_slot = false;
    ctx->pc = 0x272480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x272480u, 0x1499F0u, 0x1499F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1499F8u;
label_1499f8:
    // 0x1499f8: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1499f8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1499fc:
    // 0x1499fc: 0x12200011  beqz        $s1, . + 4 + (0x11 << 2)
    ctx->pc = 0x1499FCu;
    {
        const bool branch_taken_0x1499fc = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x149A00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1499FCu;
        // 0x149a00: 0x121880  sll         $v1, $s2, 2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1499fc) {
            ctx->pc = 0x149A44u;
            goto label_149a44;
        }
    }
    ctx->pc = 0x149A04u;
    // 0x149a04: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x149a04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x149a08: 0x3c040049  lui         $a0, 0x49
    ctx->pc = 0x149a08u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)73 << 16));
    // 0x149a0c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x149a0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x149a10: 0x24849a08  addiu       $a0, $a0, -0x65F8
    ctx->pc = 0x149a10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941192));
    // 0x149a14: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x149a14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x149a18: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x149a18u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x149a1c: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x149a1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x149a20: 0x8c90020c  lw          $s0, 0x20C($a0)
    ctx->pc = 0x149a20u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 524)));
    // 0x149a24: 0x12000007  beqz        $s0, . + 4 + (0x7 << 2)
    ctx->pc = 0x149A24u;
    {
        const bool branch_taken_0x149a24 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x149A28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x149A24u;
        // 0x149a28: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x149a24) {
            ctx->pc = 0x149A44u;
            goto label_149a44;
        }
    }
    ctx->pc = 0x149A2Cu;
    // 0x149a2c: 0xc0454a8  jal         func_1152A0
    ctx->pc = 0x149A2Cu;
    SET_GPR_U32(ctx, 31, 0x149A34u);
    ctx->pc = 0x149A30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x149A2Cu;
    // 0x149a30: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1152A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1152A0u, 0x149A2Cu, 0x149A34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x149A34u;
label_149a34:
    // 0x149a34: 0x8e0202a8  lw          $v0, 0x2A8($s0)
    ctx->pc = 0x149a34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 680)));
    // 0x149a38: 0x511026  xor         $v0, $v0, $s1
    ctx->pc = 0x149a38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 17));
    // 0x149a3c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x149A3Cu;
    {
        const bool branch_taken_0x149a3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x149A40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x149A3Cu;
        // 0x149a40: 0x2c420001  sltiu       $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x149a3c) {
            ctx->pc = 0x149A48u;
            goto label_149a48;
        }
    }
    ctx->pc = 0x149A44u;
label_149a44:
    // 0x149a44: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x149a44u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_149a48:
    // 0x149a48: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x149a48u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x149a4c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x149a4cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x149a50: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x149a50u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x149a54: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x149a54u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x149a58: 0x3e00008  jr          $ra
    ctx->pc = 0x149A58u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x149A5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x149A58u;
        // 0x149a5c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x149A58u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x149A60u;
}
