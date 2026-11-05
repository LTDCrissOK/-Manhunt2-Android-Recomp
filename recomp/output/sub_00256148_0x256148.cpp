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

// Function: sub_00256148
// Address: 0x256148 - 0x256238
void sub_00256148_0x256148(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00256148_0x256148");
#endif

    switch (ctx->pc) {
        case 0x25620cu: goto label_25620c;
        case 0x256228u: goto label_256228;
        default: break;
    }

    ctx->pc = 0x256148u;

    // 0x256148: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x256148u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x25614c: 0x3c04bfff  lui         $a0, 0xBFFF
    ctx->pc = 0x25614cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)49151 << 16));
    // 0x256150: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x256150u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x256154: 0x423b8  dsll        $a0, $a0, 14
    ctx->pc = 0x256154u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 14);
    // 0x256158: 0x34843fff  ori         $a0, $a0, 0x3FFF
    ctx->pc = 0x256158u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)16383);
    // 0x25615c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x25615cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x256160: 0x34028000  ori         $v0, $zero, 0x8000
    ctx->pc = 0x256160u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x256164: 0x21538  dsll        $v0, $v0, 20
    ctx->pc = 0x256164u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 20);
    // 0x256168: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x256168u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x25616c: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x25616cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x256170: 0xde031020  ld          $v1, 0x1020($s0)
    ctx->pc = 0x256170u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 16), 4128)));
    // 0x256174: 0x642024  and         $a0, $v1, $a0
    ctx->pc = 0x256174u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x256178: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x256178u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x25617c: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x25617Cu;
    {
        const bool branch_taken_0x25617c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x256180u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25617Cu;
        // 0x256180: 0xfe041020  sd          $a0, 0x1020($s0) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 16), 4128), GPR_U64(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25617c) {
            ctx->pc = 0x2561B0u;
            goto label_2561b0;
        }
    }
    ctx->pc = 0x256184u;
    // 0x256184: 0x3c02bfff  lui         $v0, 0xBFFF
    ctx->pc = 0x256184u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49151 << 16));
    // 0x256188: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x256188u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x25618c: 0x21178  dsll        $v0, $v0, 5
    ctx->pc = 0x25618cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 5);
    // 0x256190: 0x3442001f  ori         $v0, $v0, 0x1F
    ctx->pc = 0x256190u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)31);
    // 0x256194: 0x3c03bfff  lui         $v1, 0xBFFF
    ctx->pc = 0x256194u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49151 << 16));
    // 0x256198: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x256198u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x25619c: 0x319b8  dsll        $v1, $v1, 6
    ctx->pc = 0x25619cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 6);
    // 0x2561a0: 0x3463003f  ori         $v1, $v1, 0x3F
    ctx->pc = 0x2561a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)63);
    // 0x2561a4: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x2561a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x2561a8: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2561a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x2561ac: 0xfe021020  sd          $v0, 0x1020($s0)
    ctx->pc = 0x2561acu;
    WRITE64(ADD32(GPR_U32(ctx, 16), 4128), GPR_U64(ctx, 2));
label_2561b0:
    // 0x2561b0: 0xde031020  ld          $v1, 0x1020($s0)
    ctx->pc = 0x2561b0u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 16), 4128)));
    // 0x2561b4: 0x34028000  ori         $v0, $zero, 0x8000
    ctx->pc = 0x2561b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x2561b8: 0x21778  dsll        $v0, $v0, 29
    ctx->pc = 0x2561b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 29);
    // 0x2561bc: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x2561bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x2561c0: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x2561C0u;
    {
        const bool branch_taken_0x2561c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2561c0) {
            ctx->pc = 0x2561C4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2561C0u;
            // 0x2561c4: 0xde021020  ld          $v0, 0x1020($s0) (Delay Slot)
            SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 4128)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2561E4u;
            goto label_2561e4;
        }
    }
    ctx->pc = 0x2561C8u;
    // 0x2561c8: 0x3c02bfff  lui         $v0, 0xBFFF
    ctx->pc = 0x2561c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49151 << 16));
    // 0x2561cc: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x2561ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x2561d0: 0x211b8  dsll        $v0, $v0, 6
    ctx->pc = 0x2561d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 6);
    // 0x2561d4: 0x3442003f  ori         $v0, $v0, 0x3F
    ctx->pc = 0x2561d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)63);
    // 0x2561d8: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x2561d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x2561dc: 0xfe021020  sd          $v0, 0x1020($s0)
    ctx->pc = 0x2561dcu;
    WRITE64(ADD32(GPR_U32(ctx, 16), 4128), GPR_U64(ctx, 2));
    // 0x2561e0: 0xde021020  ld          $v0, 0x1020($s0)
    ctx->pc = 0x2561e0u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 4128)));
label_2561e4:
    // 0x2561e4: 0x3c03bfff  lui         $v1, 0xBFFF
    ctx->pc = 0x2561e4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49151 << 16));
    // 0x2561e8: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x2561e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x2561ec: 0x319f8  dsll        $v1, $v1, 7
    ctx->pc = 0x2561ecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 7);
    // 0x2561f0: 0x3463007f  ori         $v1, $v1, 0x7F
    ctx->pc = 0x2561f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)127);
    // 0x2561f4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2561f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2561f8: 0x24050400  addiu       $a1, $zero, 0x400
    ctx->pc = 0x2561f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
    // 0x2561fc: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2561fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x256200: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x256200u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x256204: 0xc08fed2  jal         func_23FB48
    ctx->pc = 0x256204u;
    SET_GPR_U32(ctx, 31, 0x25620Cu);
    ctx->pc = 0x256208u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x256204u;
    // 0x256208: 0xfe021020  sd          $v0, 0x1020($s0) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 16), 4128), GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23FB48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23FB48u, 0x256204u, 0x25620Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25620Cu;
label_25620c:
    // 0x25620c: 0xde021020  ld          $v0, 0x1020($s0)
    ctx->pc = 0x25620cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 4128)));
    // 0x256210: 0x34038000  ori         $v1, $zero, 0x8000
    ctx->pc = 0x256210u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x256214: 0x31cb8  dsll        $v1, $v1, 18
    ctx->pc = 0x256214u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 18);
    // 0x256218: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x256218u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25621c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x25621cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x256220: 0xc09538c  jal         func_254E30
    ctx->pc = 0x256220u;
    SET_GPR_U32(ctx, 31, 0x256228u);
    ctx->pc = 0x256224u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x256220u;
    // 0x256224: 0xfe021020  sd          $v0, 0x1020($s0) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 16), 4128), GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x254E30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x254E30u, 0x256220u, 0x256228u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x256228u;
label_256228:
    // 0x256228: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x256228u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x25622c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x25622cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x256230: 0x3e00008  jr          $ra
    ctx->pc = 0x256230u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x256234u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x256230u;
        // 0x256234: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x256230u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x256238u;
}
