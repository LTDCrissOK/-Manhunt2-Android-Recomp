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

// Function: sub_00178300
// Address: 0x178300 - 0x178388
void sub_00178300_0x178300(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00178300_0x178300");
#endif

    switch (ctx->pc) {
        case 0x17833cu: goto label_17833c;
        case 0x17834cu: goto label_17834c;
        case 0x17835cu: goto label_17835c;
        case 0x178368u: goto label_178368;
        default: break;
    }

    ctx->pc = 0x178300u;

    // 0x178300: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x178300u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x178304: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x178304u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x178308: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x178308u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x17830c: 0x30b300ff  andi        $s3, $a1, 0xFF
    ctx->pc = 0x17830cu;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x178310: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x178310u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x178314: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x178314u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x178318: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x178318u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x17831c: 0x1310c0  sll         $v0, $s3, 3
    ctx->pc = 0x17831cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 19), 3));
    // 0x178320: 0x2221821  addu        $v1, $s1, $v0
    ctx->pc = 0x178320u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x178324: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x178324u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x178328: 0x8c7000dc  lw          $s0, 0xDC($v1)
    ctx->pc = 0x178328u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 220)));
    // 0x17832c: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x17832cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x178330: 0x8c5200d8  lw          $s2, 0xD8($v0)
    ctx->pc = 0x178330u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 216)));
    // 0x178334: 0xc05e29e  jal         func_178A78
    ctx->pc = 0x178334u;
    SET_GPR_U32(ctx, 31, 0x17833Cu);
    ctx->pc = 0x178338u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x178334u;
    // 0x178338: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x178A78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x178A78u, 0x178334u, 0x17833Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17833Cu;
label_17833c:
    // 0x17833c: 0x3c040049  lui         $a0, 0x49
    ctx->pc = 0x17833cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)73 << 16));
    // 0x178340: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x178340u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x178344: 0xc04211c  jal         func_108470
    ctx->pc = 0x178344u;
    SET_GPR_U32(ctx, 31, 0x17834Cu);
    ctx->pc = 0x178348u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x178344u;
    // 0x178348: 0x24848758  addiu       $a0, $a0, -0x78A8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294936408));
    ctx->in_delay_slot = false;
    ctx->pc = 0x108470u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108470u, 0x178344u, 0x17834Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17834Cu;
label_17834c:
    // 0x17834c: 0x3c040049  lui         $a0, 0x49
    ctx->pc = 0x17834cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)73 << 16));
    // 0x178350: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x178350u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x178354: 0xc0477b8  jal         func_11DEE0
    ctx->pc = 0x178354u;
    SET_GPR_U32(ctx, 31, 0x17835Cu);
    ctx->pc = 0x178358u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x178354u;
    // 0x178358: 0x24849a08  addiu       $a0, $a0, -0x65F8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941192));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11DEE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11DEE0u, 0x178354u, 0x17835Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17835Cu;
label_17835c:
    // 0x17835c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x17835cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x178360: 0xc05e098  jal         func_178260
    ctx->pc = 0x178360u;
    SET_GPR_U32(ctx, 31, 0x178368u);
    ctx->pc = 0x178364u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x178360u;
    // 0x178364: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x178260u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x178260u, 0x178360u, 0x178368u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x178368u;
label_178368:
    // 0x178368: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x178368u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17836c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x17836cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x178370: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x178370u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x178374: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x178374u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x178378: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x178378u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x17837c: 0x3e00008  jr          $ra
    ctx->pc = 0x17837Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x178380u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17837Cu;
        // 0x178380: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17837Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x178384u;
    // 0x178384: 0x0  nop
    ctx->pc = 0x178384u;
    // NOP
    ctx->pc = 0x178388u;
}
