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

// Function: sub_0014B940
// Address: 0x14b940 - 0x14ba18
void sub_0014B940_0x14b940(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0014B940_0x14b940");
#endif

    switch (ctx->pc) {
        case 0x14b974u: goto label_14b974;
        case 0x14b9a0u: goto label_14b9a0;
        case 0x14b9d8u: goto label_14b9d8;
        case 0x14ba04u: goto label_14ba04;
        default: break;
    }

    ctx->pc = 0x14b940u;

    // 0x14b940: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x14b940u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x14b944: 0x3c020043  lui         $v0, 0x43
    ctx->pc = 0x14b944u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)67 << 16));
    // 0x14b948: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x14b948u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x14b94c: 0x24420a20  addiu       $v0, $v0, 0xA20
    ctx->pc = 0x14b94cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2592));
    // 0x14b950: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x14b950u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x14b954: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x14b954u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14b958: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x14b958u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x14b95c: 0xae02000c  sw          $v0, 0xC($s0)
    ctx->pc = 0x14b95cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
    // 0x14b960: 0x8e030460  lw          $v1, 0x460($s0)
    ctx->pc = 0x14b960u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1120)));
    // 0x14b964: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x14B964u;
    {
        const bool branch_taken_0x14b964 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x14B968u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14B964u;
        // 0x14b968: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14b964) {
            ctx->pc = 0x14B974u;
            goto label_14b974;
        }
    }
    ctx->pc = 0x14B96Cu;
    // 0x14b96c: 0xc052e9a  jal         func_14BA68
    ctx->pc = 0x14B96Cu;
    SET_GPR_U32(ctx, 31, 0x14B974u);
    ctx->pc = 0x14BA68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14BA68u, 0x14B96Cu, 0x14B974u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14B974u;
label_14b974:
    // 0x14b974: 0x32250001  andi        $a1, $s1, 0x1
    ctx->pc = 0x14b974u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)1);
    // 0x14b978: 0x260404e0  addiu       $a0, $s0, 0x4E0
    ctx->pc = 0x14b978u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1248));
    // 0x14b97c: 0x3c020043  lui         $v0, 0x43
    ctx->pc = 0x14b97cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)67 << 16));
    // 0x14b980: 0x26060010  addiu       $a2, $s0, 0x10
    ctx->pc = 0x14b980u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x14b984: 0x1080000c  beqz        $a0, . + 4 + (0xC << 2)
    ctx->pc = 0x14B984u;
    {
        const bool branch_taken_0x14b984 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x14B988u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14B984u;
        // 0x14b988: 0x3c070043  lui         $a3, 0x43 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)67 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14b984) {
            ctx->pc = 0x14B9B8u;
            goto label_14b9b8;
        }
    }
    ctx->pc = 0x14B98Cu;
    // 0x14b98c: 0x26030660  addiu       $v1, $s0, 0x660
    ctx->pc = 0x14b98cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 1632));
    // 0x14b990: 0x5083000a  beql        $a0, $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x14B990u;
    {
        const bool branch_taken_0x14b990 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x14b990) {
            ctx->pc = 0x14B994u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x14B990u;
            // 0x14b994: 0x244205f0  addiu       $v0, $v0, 0x5F0 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1520));
            ctx->in_delay_slot = false;
            ctx->pc = 0x14B9BCu;
            goto label_14b9bc;
        }
    }
    ctx->pc = 0x14B998u;
    // 0x14b998: 0x2463ffe8  addiu       $v1, $v1, -0x18
    ctx->pc = 0x14b998u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967272));
    // 0x14b99c: 0x0  nop
    ctx->pc = 0x14b99cu;
    // NOP
label_14b9a0:
    // 0x14b9a0: 0x0  nop
    ctx->pc = 0x14b9a0u;
    // NOP
    // 0x14b9a4: 0x0  nop
    ctx->pc = 0x14b9a4u;
    // NOP
    // 0x14b9a8: 0x0  nop
    ctx->pc = 0x14b9a8u;
    // NOP
    // 0x14b9ac: 0x0  nop
    ctx->pc = 0x14b9acu;
    // NOP
    // 0x14b9b0: 0x5483fffb  bnel        $a0, $v1, . + 4 + (-0x5 << 2)
    ctx->pc = 0x14B9B0u;
    {
        const bool branch_taken_0x14b9b0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x14b9b0) {
            ctx->pc = 0x14B9B4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x14B9B0u;
            // 0x14b9b4: 0x2463ffe8  addiu       $v1, $v1, -0x18 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967272));
            ctx->in_delay_slot = false;
            ctx->pc = 0x14B9A0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_14b9a0;
        }
    }
    ctx->pc = 0x14B9B8u;
label_14b9b8:
    // 0x14b9b8: 0x244205f0  addiu       $v0, $v0, 0x5F0
    ctx->pc = 0x14b9b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1520));
label_14b9bc:
    // 0x14b9bc: 0x10c0000c  beqz        $a2, . + 4 + (0xC << 2)
    ctx->pc = 0x14B9BCu;
    {
        const bool branch_taken_0x14b9bc = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x14B9C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14B9BCu;
        // 0x14b9c0: 0xae02000c  sw          $v0, 0xC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14b9bc) {
            ctx->pc = 0x14B9F0u;
            goto label_14b9f0;
        }
    }
    ctx->pc = 0x14B9C4u;
    // 0x14b9c4: 0x26020410  addiu       $v0, $s0, 0x410
    ctx->pc = 0x14b9c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 1040));
    // 0x14b9c8: 0x50c2000a  beql        $a2, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x14B9C8u;
    {
        const bool branch_taken_0x14b9c8 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 2));
        if (branch_taken_0x14b9c8) {
            ctx->pc = 0x14B9CCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x14B9C8u;
            // 0x14b9cc: 0x24e20638  addiu       $v0, $a3, 0x638 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 1592));
            ctx->in_delay_slot = false;
            ctx->pc = 0x14B9F4u;
            goto label_14b9f4;
        }
    }
    ctx->pc = 0x14B9D0u;
    // 0x14b9d0: 0xc0182d  daddu       $v1, $a2, $zero
    ctx->pc = 0x14b9d0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14b9d4: 0x2442ffc0  addiu       $v0, $v0, -0x40
    ctx->pc = 0x14b9d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967232));
label_14b9d8:
    // 0x14b9d8: 0x0  nop
    ctx->pc = 0x14b9d8u;
    // NOP
    // 0x14b9dc: 0x0  nop
    ctx->pc = 0x14b9dcu;
    // NOP
    // 0x14b9e0: 0x0  nop
    ctx->pc = 0x14b9e0u;
    // NOP
    // 0x14b9e4: 0x0  nop
    ctx->pc = 0x14b9e4u;
    // NOP
    // 0x14b9e8: 0x1462fffb  bne         $v1, $v0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x14B9E8u;
    {
        const bool branch_taken_0x14b9e8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x14B9ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14B9E8u;
        // 0x14b9ec: 0x2442ffc0  addiu       $v0, $v0, -0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967232));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14b9e8) {
            ctx->pc = 0x14B9D8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_14b9d8;
        }
    }
    ctx->pc = 0x14B9F0u;
label_14b9f0:
    // 0x14b9f0: 0x24e20638  addiu       $v0, $a3, 0x638
    ctx->pc = 0x14b9f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 1592));
label_14b9f4:
    // 0x14b9f4: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x14B9F4u;
    {
        const bool branch_taken_0x14b9f4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x14B9F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14B9F4u;
        // 0x14b9f8: 0xae02000c  sw          $v0, 0xC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14b9f4) {
            ctx->pc = 0x14BA04u;
            goto label_14ba04;
        }
    }
    ctx->pc = 0x14B9FCu;
    // 0x14b9fc: 0xc0f5222  jal         func_3D4888
    ctx->pc = 0x14B9FCu;
    SET_GPR_U32(ctx, 31, 0x14BA04u);
    ctx->pc = 0x14BA00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14B9FCu;
    // 0x14ba00: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4888u, 0x14B9FCu, 0x14BA04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14BA04u;
label_14ba04:
    // 0x14ba04: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x14ba04u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x14ba08: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x14ba08u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x14ba0c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x14ba0cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x14ba10: 0x3e00008  jr          $ra
    ctx->pc = 0x14BA10u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14BA14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14BA10u;
        // 0x14ba14: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14BA10u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x14BA18u;
}
