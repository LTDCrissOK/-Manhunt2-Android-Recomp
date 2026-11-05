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

// Function: sub_00263F18
// Address: 0x263f18 - 0x263fb0
void sub_00263F18_0x263f18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00263F18_0x263f18");
#endif

    switch (ctx->pc) {
        case 0x263f54u: goto label_263f54;
        case 0x263f74u: goto label_263f74;
        case 0x263f84u: goto label_263f84;
        default: break;
    }

    ctx->pc = 0x263f18u;

    // 0x263f18: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x263f18u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x263f1c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x263f1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x263f20: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x263f20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x263f24: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x263f24u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x263f28: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x263f28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x263f2c: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x263f2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x263f30: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x263f30u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x263f34: 0x128880  sll         $s1, $s2, 2
    ctx->pc = 0x263f34u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x263f38: 0x8e0200b8  lw          $v0, 0xB8($s0)
    ctx->pc = 0x263f38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 184)));
    // 0x263f3c: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x263f3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x263f40: 0x8c4403ac  lw          $a0, 0x3AC($v0)
    ctx->pc = 0x263f40u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 940)));
    // 0x263f44: 0x50800014  beql        $a0, $zero, . + 4 + (0x14 << 2)
    ctx->pc = 0x263F44u;
    {
        const bool branch_taken_0x263f44 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x263f44) {
            ctx->pc = 0x263F48u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x263F44u;
            // 0x263f48: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x263F98u;
            goto label_263f98;
        }
    }
    ctx->pc = 0x263F4Cu;
    // 0x263f4c: 0xc0c31d0  jal         func_30C740
    ctx->pc = 0x263F4Cu;
    SET_GPR_U32(ctx, 31, 0x263F54u);
    ctx->pc = 0x30C740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30C740u, 0x263F4Cu, 0x263F54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x263F54u;
label_263f54:
    // 0x263f54: 0x260302cc  addiu       $v1, $s0, 0x2CC
    ctx->pc = 0x263f54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 716));
    // 0x263f58: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x263f58u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x263f5c: 0x711821  addu        $v1, $v1, $s1
    ctx->pc = 0x263f5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x263f60: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x263f60u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x263f64: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x263f64u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x263f68: 0xac500008  sw          $s0, 0x8($v0)
    ctx->pc = 0x263f68u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 16));
    // 0x263f6c: 0xc0849de  jal         func_212778
    ctx->pc = 0x263F6Cu;
    SET_GPR_U32(ctx, 31, 0x263F74u);
    ctx->pc = 0x263F70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x263F6Cu;
    // 0x263f70: 0x8c650000  lw          $a1, 0x0($v1) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x212778u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x212778u, 0x263F6Cu, 0x263F74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x263F74u;
label_263f74:
    // 0x263f74: 0x262502cc  addiu       $a1, $s1, 0x2CC
    ctx->pc = 0x263f74u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 716));
    // 0x263f78: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x263f78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x263f7c: 0xc098346  jal         func_260D18
    ctx->pc = 0x263F7Cu;
    SET_GPR_U32(ctx, 31, 0x263F84u);
    ctx->pc = 0x263F80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x263F7Cu;
    // 0x263f80: 0x2052821  addu        $a1, $s0, $a1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 5)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x260D18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x260D18u, 0x263F7Cu, 0x263F84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x263F84u;
label_263f84:
    // 0x263f84: 0x92020116  lbu         $v0, 0x116($s0)
    ctx->pc = 0x263f84u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 278)));
    // 0x263f88: 0xae1202dc  sw          $s2, 0x2DC($s0)
    ctx->pc = 0x263f88u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 732), GPR_U32(ctx, 18));
    // 0x263f8c: 0x34420004  ori         $v0, $v0, 0x4
    ctx->pc = 0x263f8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4);
    // 0x263f90: 0xa2020116  sb          $v0, 0x116($s0)
    ctx->pc = 0x263f90u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 278), (uint8_t)GPR_U32(ctx, 2));
    // 0x263f94: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x263f94u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_263f98:
    // 0x263f98: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x263f98u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x263f9c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x263f9cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x263fa0: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x263fa0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x263fa4: 0x3e00008  jr          $ra
    ctx->pc = 0x263FA4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x263FA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x263FA4u;
        // 0x263fa8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x263FA4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x263FACu;
    // 0x263fac: 0x0  nop
    ctx->pc = 0x263facu;
    // NOP
    ctx->pc = 0x263fb0u;
}
