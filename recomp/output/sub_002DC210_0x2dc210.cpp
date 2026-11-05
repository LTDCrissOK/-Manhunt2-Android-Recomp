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

// Function: sub_002DC210
// Address: 0x2dc210 - 0x2dc280
void sub_002DC210_0x2dc210(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002DC210_0x2dc210");
#endif

    switch (ctx->pc) {
        case 0x2dc24cu: goto label_2dc24c;
        case 0x2dc268u: goto label_2dc268;
        default: break;
    }

    ctx->pc = 0x2dc210u;

    // 0x2dc210: 0x27bdfbd0  addiu       $sp, $sp, -0x430
    ctx->pc = 0x2dc210u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966224));
    // 0x2dc214: 0xffb10408  sd          $s1, 0x408($sp)
    ctx->pc = 0x2dc214u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1032), GPR_U64(ctx, 17));
    // 0x2dc218: 0xffbf0410  sd          $ra, 0x410($sp)
    ctx->pc = 0x2dc218u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1040), GPR_U64(ctx, 31));
    // 0x2dc21c: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x2dc21cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dc220: 0xe7b40420  swc1        $f20, 0x420($sp)
    ctx->pc = 0x2dc220u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1056), bits); }
    // 0x2dc224: 0xffb00400  sd          $s0, 0x400($sp)
    ctx->pc = 0x2dc224u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1024), GPR_U64(ctx, 16));
    // 0x2dc228: 0x46006506  mov.s       $f20, $f12
    ctx->pc = 0x2dc228u;
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    // 0x2dc22c: 0x8c900004  lw          $s0, 0x4($a0)
    ctx->pc = 0x2dc22cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x2dc230: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x2dc230u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2dc234: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2dc234u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dc238: 0x2038023  subu        $s0, $s0, $v1
    ctx->pc = 0x2dc238u;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x2dc23c: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x2dc23cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x2dc240: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x2dc240u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dc244: 0xc0b6fb8  jal         func_2DBEE0
    ctx->pc = 0x2DC244u;
    SET_GPR_U32(ctx, 31, 0x2DC24Cu);
    ctx->pc = 0x2DC248u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DC244u;
    // 0x2dc248: 0xa22821  addu        $a1, $a1, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DBEE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DBEE0u, 0x2DC244u, 0x2DC24Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DC24Cu;
label_2dc24c:
    // 0x2dc24c: 0x108040  sll         $s0, $s0, 1
    ctx->pc = 0x2dc24cu;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
    // 0x2dc250: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x2dc250u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x2dc254: 0x3b01021  addu        $v0, $sp, $s0
    ctx->pc = 0x2dc254u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 16)));
    // 0x2dc258: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2dc258u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dc25c: 0xa4400000  sh          $zero, 0x0($v0)
    ctx->pc = 0x2dc25cu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 0));
    // 0x2dc260: 0xc09f60e  jal         func_27D838
    ctx->pc = 0x2DC260u;
    SET_GPR_U32(ctx, 31, 0x2DC268u);
    ctx->pc = 0x2DC264u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DC260u;
    // 0x2dc264: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27D838u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27D838u, 0x2DC260u, 0x2DC268u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DC268u;
label_2dc268:
    // 0x2dc268: 0xdfb00400  ld          $s0, 0x400($sp)
    ctx->pc = 0x2dc268u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 1024)));
    // 0x2dc26c: 0xdfb10408  ld          $s1, 0x408($sp)
    ctx->pc = 0x2dc26cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 1032)));
    // 0x2dc270: 0xdfbf0410  ld          $ra, 0x410($sp)
    ctx->pc = 0x2dc270u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 1040)));
    // 0x2dc274: 0xc7b40420  lwc1        $f20, 0x420($sp)
    ctx->pc = 0x2dc274u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1056)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2dc278: 0x3e00008  jr          $ra
    ctx->pc = 0x2DC278u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2DC27Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DC278u;
        // 0x2dc27c: 0x27bd0430  addiu       $sp, $sp, 0x430 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 1072));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2DC278u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2DC280u;
}
