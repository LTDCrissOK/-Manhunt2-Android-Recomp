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

// Function: sub_00271A18
// Address: 0x271a18 - 0x271b40
void sub_00271A18_0x271a18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00271A18_0x271a18");
#endif

    switch (ctx->pc) {
        case 0x271a30u: goto label_271a30;
        case 0x271a5cu: goto label_271a5c;
        case 0x271a64u: goto label_271a64;
        case 0x271af8u: goto label_271af8;
        case 0x271b20u: goto label_271b20;
        default: break;
    }

    ctx->pc = 0x271a18u;

    // 0x271a18: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x271a18u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x271a1c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x271a1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x271a20: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x271a20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x271a24: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x271a24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x271a28: 0xc0835aa  jal         func_20D6A8
    ctx->pc = 0x271A28u;
    SET_GPR_U32(ctx, 31, 0x271A30u);
    ctx->pc = 0x271A2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x271A28u;
    // 0x271a2c: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20D6A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20D6A8u, 0x271A28u, 0x271A30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x271A30u;
label_271a30:
    // 0x271a30: 0x3c030043  lui         $v1, 0x43
    ctx->pc = 0x271a30u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)67 << 16));
    // 0x271a34: 0x3c110046  lui         $s1, 0x46
    ctx->pc = 0x271a34u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)70 << 16));
    // 0x271a38: 0x26317f88  addiu       $s1, $s1, 0x7F88
    ctx->pc = 0x271a38u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 32648));
    // 0x271a3c: 0x24632a78  addiu       $v1, $v1, 0x2A78
    ctx->pc = 0x271a3cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 10872));
    // 0x271a40: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x271a40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x271a44: 0xae000224  sw          $zero, 0x224($s0)
    ctx->pc = 0x271a44u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 548), GPR_U32(ctx, 0));
    // 0x271a48: 0xae030218  sw          $v1, 0x218($s0)
    ctx->pc = 0x271a48u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 536), GPR_U32(ctx, 3));
    // 0x271a4c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x271a4cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x271a50: 0x26040228  addiu       $a0, $s0, 0x228
    ctx->pc = 0x271a50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 552));
    // 0x271a54: 0xc0d7424  jal         func_35D090
    ctx->pc = 0x271A54u;
    SET_GPR_U32(ctx, 31, 0x271A5Cu);
    ctx->pc = 0x271A58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x271A54u;
    // 0x271a58: 0xa2020220  sb          $v0, 0x220($s0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 16), 544), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D090u, 0x271A54u, 0x271A5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x271A5Cu;
label_271a5c:
    // 0x271a5c: 0xc0b4bae  jal         func_2D2EB8
    ctx->pc = 0x271A5Cu;
    SET_GPR_U32(ctx, 31, 0x271A64u);
    ctx->pc = 0x271A60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x271A5Cu;
    // 0x271a60: 0x26040230  addiu       $a0, $s0, 0x230 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 560));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D2EB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D2EB8u, 0x271A5Cu, 0x271A64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x271A64u;
label_271a64:
    // 0x271a64: 0xae000250  sw          $zero, 0x250($s0)
    ctx->pc = 0x271a64u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 592), GPR_U32(ctx, 0));
    // 0x271a68: 0x26020250  addiu       $v0, $s0, 0x250
    ctx->pc = 0x271a68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 592));
    // 0x271a6c: 0xac40000c  sw          $zero, 0xC($v0)
    ctx->pc = 0x271a6cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 0));
    // 0x271a70: 0x26030260  addiu       $v1, $s0, 0x260
    ctx->pc = 0x271a70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 608));
    // 0x271a74: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x271a74u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x271a78: 0x26060270  addiu       $a2, $s0, 0x270
    ctx->pc = 0x271a78u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 624));
    // 0x271a7c: 0xac400008  sw          $zero, 0x8($v0)
    ctx->pc = 0x271a7cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
    // 0x271a80: 0x26070280  addiu       $a3, $s0, 0x280
    ctx->pc = 0x271a80u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 640));
    // 0x271a84: 0xae000260  sw          $zero, 0x260($s0)
    ctx->pc = 0x271a84u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 608), GPR_U32(ctx, 0));
    // 0x271a88: 0x26020290  addiu       $v0, $s0, 0x290
    ctx->pc = 0x271a88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 656));
    // 0x271a8c: 0xac60000c  sw          $zero, 0xC($v1)
    ctx->pc = 0x271a8cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 0));
    // 0x271a90: 0x260802a0  addiu       $t0, $s0, 0x2A0
    ctx->pc = 0x271a90u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 16), 672));
    // 0x271a94: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x271a94u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x271a98: 0x260402c0  addiu       $a0, $s0, 0x2C0
    ctx->pc = 0x271a98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 704));
    // 0x271a9c: 0xac600008  sw          $zero, 0x8($v1)
    ctx->pc = 0x271a9cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 0));
    // 0x271aa0: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x271aa0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x271aa4: 0xae000270  sw          $zero, 0x270($s0)
    ctx->pc = 0x271aa4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 624), GPR_U32(ctx, 0));
    // 0x271aa8: 0xacc0000c  sw          $zero, 0xC($a2)
    ctx->pc = 0x271aa8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 12), GPR_U32(ctx, 0));
    // 0x271aac: 0xacc00004  sw          $zero, 0x4($a2)
    ctx->pc = 0x271aacu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 0));
    // 0x271ab0: 0xacc00008  sw          $zero, 0x8($a2)
    ctx->pc = 0x271ab0u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 0));
    // 0x271ab4: 0xae000280  sw          $zero, 0x280($s0)
    ctx->pc = 0x271ab4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 640), GPR_U32(ctx, 0));
    // 0x271ab8: 0xace0000c  sw          $zero, 0xC($a3)
    ctx->pc = 0x271ab8u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 12), GPR_U32(ctx, 0));
    // 0x271abc: 0xace00004  sw          $zero, 0x4($a3)
    ctx->pc = 0x271abcu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4), GPR_U32(ctx, 0));
    // 0x271ac0: 0xace00008  sw          $zero, 0x8($a3)
    ctx->pc = 0x271ac0u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 8), GPR_U32(ctx, 0));
    // 0x271ac4: 0xae000290  sw          $zero, 0x290($s0)
    ctx->pc = 0x271ac4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 656), GPR_U32(ctx, 0));
    // 0x271ac8: 0xac40000c  sw          $zero, 0xC($v0)
    ctx->pc = 0x271ac8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 0));
    // 0x271acc: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x271accu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x271ad0: 0xac400008  sw          $zero, 0x8($v0)
    ctx->pc = 0x271ad0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
    // 0x271ad4: 0xae0002a0  sw          $zero, 0x2A0($s0)
    ctx->pc = 0x271ad4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 672), GPR_U32(ctx, 0));
    // 0x271ad8: 0xad00000c  sw          $zero, 0xC($t0)
    ctx->pc = 0x271ad8u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 12), GPR_U32(ctx, 0));
    // 0x271adc: 0xad000004  sw          $zero, 0x4($t0)
    ctx->pc = 0x271adcu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 4), GPR_U32(ctx, 0));
    // 0x271ae0: 0xad000008  sw          $zero, 0x8($t0)
    ctx->pc = 0x271ae0u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 8), GPR_U32(ctx, 0));
    // 0x271ae4: 0xae0002b0  sw          $zero, 0x2B0($s0)
    ctx->pc = 0x271ae4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 688), GPR_U32(ctx, 0));
    // 0x271ae8: 0xae0002b4  sw          $zero, 0x2B4($s0)
    ctx->pc = 0x271ae8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 692), GPR_U32(ctx, 0));
    // 0x271aec: 0xae0002b8  sw          $zero, 0x2B8($s0)
    ctx->pc = 0x271aecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 696), GPR_U32(ctx, 0));
    // 0x271af0: 0xc0d7424  jal         func_35D090
    ctx->pc = 0x271AF0u;
    SET_GPR_U32(ctx, 31, 0x271AF8u);
    ctx->pc = 0x271AF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x271AF0u;
    // 0x271af4: 0xae0002bc  sw          $zero, 0x2BC($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 700), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D090u, 0x271AF0u, 0x271AF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x271AF8u;
label_271af8:
    // 0x271af8: 0xae0002c8  sw          $zero, 0x2C8($s0)
    ctx->pc = 0x271af8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 712), GPR_U32(ctx, 0));
    // 0x271afc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x271afcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x271b00: 0xae0002cc  sw          $zero, 0x2CC($s0)
    ctx->pc = 0x271b00u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 716), GPR_U32(ctx, 0));
    // 0x271b04: 0x3c04004b  lui         $a0, 0x4B
    ctx->pc = 0x271b04u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)75 << 16));
    // 0x271b08: 0xae0002d0  sw          $zero, 0x2D0($s0)
    ctx->pc = 0x271b08u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 720), GPR_U32(ctx, 0));
    // 0x271b0c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x271b0cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x271b10: 0xa20002d4  sb          $zero, 0x2D4($s0)
    ctx->pc = 0x271b10u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 724), (uint8_t)GPR_U32(ctx, 0));
    // 0x271b14: 0x24844778  addiu       $a0, $a0, 0x4778
    ctx->pc = 0x271b14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 18296));
    // 0x271b18: 0xc0f6f38  jal         func_3DBCE0
    ctx->pc = 0x271B18u;
    SET_GPR_U32(ctx, 31, 0x271B20u);
    ctx->pc = 0x271B1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x271B18u;
    // 0x271b1c: 0xa20202d5  sb          $v0, 0x2D5($s0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 16), 725), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DBCE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DBCE0u, 0x271B18u, 0x271B20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x271B20u;
label_271b20:
    // 0x271b20: 0xae0202cc  sw          $v0, 0x2CC($s0)
    ctx->pc = 0x271b20u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 716), GPR_U32(ctx, 2));
    // 0x271b24: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x271b24u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x271b28: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x271b28u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x271b2c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x271b2cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x271b30: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x271b30u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x271b34: 0x3e00008  jr          $ra
    ctx->pc = 0x271B34u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x271B38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x271B34u;
        // 0x271b38: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x271B34u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x271B3Cu;
    // 0x271b3c: 0x0  nop
    ctx->pc = 0x271b3cu;
    // NOP
    ctx->pc = 0x271b40u;
}
