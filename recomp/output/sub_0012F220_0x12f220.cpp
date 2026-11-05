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

// Function: sub_0012F220
// Address: 0x12f220 - 0x12f2a8
void sub_0012F220_0x12f220(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0012F220_0x12f220");
#endif

    switch (ctx->pc) {
        case 0x12f254u: goto label_12f254;
        case 0x12f264u: goto label_12f264;
        default: break;
    }

    ctx->pc = 0x12f220u;

    // 0x12f220: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x12f220u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x12f224: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x12f224u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x12f228: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x12f228u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x12f22c: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x12f22cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12f230: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x12f230u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x12f234: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x12f234u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x12f238: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x12F238u;
    {
        const bool branch_taken_0x12f238 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x12F23Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12F238u;
        // 0x12f23c: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12f238) {
            ctx->pc = 0x12F268u;
            goto label_12f268;
        }
    }
    ctx->pc = 0x12F240u;
    // 0x12f240: 0x8e11000c  lw          $s1, 0xC($s0)
    ctx->pc = 0x12f240u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x12f244: 0x12200009  beqz        $s1, . + 4 + (0x9 << 2)
    ctx->pc = 0x12F244u;
    {
        const bool branch_taken_0x12f244 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x12F248u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12F244u;
        // 0x12f248: 0x24030022  addiu       $v1, $zero, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 34));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12f244) {
            ctx->pc = 0x12F26Cu;
            goto label_12f26c;
        }
    }
    ctx->pc = 0x12F24Cu;
    // 0x12f24c: 0xc045eee  jal         func_117BB8
    ctx->pc = 0x12F24Cu;
    SET_GPR_U32(ctx, 31, 0x12F254u);
    ctx->pc = 0x12F250u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12F24Cu;
    // 0x12f250: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x117BB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x117BB8u, 0x12F24Cu, 0x12F254u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12F254u;
label_12f254:
    // 0x12f254: 0x3c040049  lui         $a0, 0x49
    ctx->pc = 0x12f254u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)73 << 16));
    // 0x12f258: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x12f258u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12f25c: 0xc042136  jal         func_1084D8
    ctx->pc = 0x12F25Cu;
    SET_GPR_U32(ctx, 31, 0x12F264u);
    ctx->pc = 0x12F260u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12F25Cu;
    // 0x12f260: 0x24848758  addiu       $a0, $a0, -0x78A8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294936408));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1084D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1084D8u, 0x12F25Cu, 0x12F264u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12F264u;
label_12f264:
    // 0x12f264: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x12f264u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_12f268:
    // 0x12f268: 0x24030022  addiu       $v1, $zero, 0x22
    ctx->pc = 0x12f268u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 34));
label_12f26c:
    // 0x12f26c: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x12f26cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    // 0x12f270: 0xae030018  sw          $v1, 0x18($s0)
    ctx->pc = 0x12f270u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 3));
    // 0x12f274: 0xae000020  sw          $zero, 0x20($s0)
    ctx->pc = 0x12f274u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 0));
    // 0x12f278: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x12f278u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    // 0x12f27c: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x12f27cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    // 0x12f280: 0xae00000c  sw          $zero, 0xC($s0)
    ctx->pc = 0x12f280u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
    // 0x12f284: 0xae000010  sw          $zero, 0x10($s0)
    ctx->pc = 0x12f284u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 0));
    // 0x12f288: 0xae000014  sw          $zero, 0x14($s0)
    ctx->pc = 0x12f288u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 0));
    // 0x12f28c: 0xae00001c  sw          $zero, 0x1C($s0)
    ctx->pc = 0x12f28cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 0));
    // 0x12f290: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x12f290u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x12f294: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x12f294u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x12f298: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x12f298u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x12f29c: 0x3e00008  jr          $ra
    ctx->pc = 0x12F29Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12F2A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12F29Cu;
        // 0x12f2a0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12F29Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x12F2A4u;
    // 0x12f2a4: 0x0  nop
    ctx->pc = 0x12f2a4u;
    // NOP
    ctx->pc = 0x12f2a8u;
}
