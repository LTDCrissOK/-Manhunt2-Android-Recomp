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

// Function: sub_00277EC8
// Address: 0x277ec8 - 0x277f58
void sub_00277EC8_0x277ec8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00277EC8_0x277ec8");
#endif

    switch (ctx->pc) {
        case 0x277f18u: goto label_277f18;
        default: break;
    }

    ctx->pc = 0x277ec8u;

    // 0x277ec8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x277ec8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x277ecc: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x277eccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x277ed0: 0x37a9000c  ori         $t1, $sp, 0xC
    ctx->pc = 0x277ed0u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 29) | (uint64_t)(uint16_t)12);
    // 0x277ed4: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x277ed4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x277ed8: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x277ed8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x277edc: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x277edcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x277ee0: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x277ee0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x277ee4: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x277ee4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
    // 0x277ee8: 0xe0902d  daddu       $s2, $a3, $zero
    ctx->pc = 0x277ee8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x277eec: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x277eecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x277ef0: 0x100982d  daddu       $s3, $t0, $zero
    ctx->pc = 0x277ef0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x277ef4: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x277ef4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
    // 0x277ef8: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x277ef8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x277efc: 0x8c820114  lw          $v0, 0x114($a0)
    ctx->pc = 0x277efcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 276)));
    // 0x277f00: 0x24a582c8  addiu       $a1, $a1, -0x7D38
    ctx->pc = 0x277f00u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294935240));
    // 0x277f04: 0x37a70004  ori         $a3, $sp, 0x4
    ctx->pc = 0x277f04u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 29) | (uint64_t)(uint16_t)4);
    // 0x277f08: 0x37a80008  ori         $t0, $sp, 0x8
    ctx->pc = 0x277f08u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 29) | (uint64_t)(uint16_t)8);
    // 0x277f0c: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x277f0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x277f10: 0xc0eff1c  jal         func_3BFC70
    ctx->pc = 0x277F10u;
    SET_GPR_U32(ctx, 31, 0x277F18u);
    ctx->pc = 0x277F14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x277F10u;
    // 0x277f14: 0x822021  addu        $a0, $a0, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BFC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BFC70u, 0x277F10u, 0x277F18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x277F18u;
label_277f18:
    // 0x277f18: 0x93a30000  lbu         $v1, 0x0($sp)
    ctx->pc = 0x277f18u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x277f1c: 0x93a40004  lbu         $a0, 0x4($sp)
    ctx->pc = 0x277f1cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x277f20: 0xa2030000  sb          $v1, 0x0($s0)
    ctx->pc = 0x277f20u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x277f24: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x277f24u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x277f28: 0x93a50008  lbu         $a1, 0x8($sp)
    ctx->pc = 0x277f28u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x277f2c: 0xa2240000  sb          $a0, 0x0($s1)
    ctx->pc = 0x277f2cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x277f30: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x277f30u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x277f34: 0x93a2000c  lbu         $v0, 0xC($sp)
    ctx->pc = 0x277f34u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 12)));
    // 0x277f38: 0xa2450000  sb          $a1, 0x0($s2)
    ctx->pc = 0x277f38u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 0), (uint8_t)GPR_U32(ctx, 5));
    // 0x277f3c: 0xa2620000  sb          $v0, 0x0($s3)
    ctx->pc = 0x277f3cu;
    WRITE8(ADD32(GPR_U32(ctx, 19), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x277f40: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x277f40u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x277f44: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x277f44u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x277f48: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x277f48u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x277f4c: 0x3e00008  jr          $ra
    ctx->pc = 0x277F4Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x277F50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x277F4Cu;
        // 0x277f50: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x277F4Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x277F54u;
    // 0x277f54: 0x0  nop
    ctx->pc = 0x277f54u;
    // NOP
    ctx->pc = 0x277f58u;
}
