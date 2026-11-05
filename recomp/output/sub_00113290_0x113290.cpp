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

// Function: sub_00113290
// Address: 0x113290 - 0x113360
void sub_00113290_0x113290(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00113290_0x113290");
#endif

    switch (ctx->pc) {
        case 0x1132a8u: goto label_1132a8;
        default: break;
    }

    ctx->pc = 0x113290u;

    // 0x113290: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x113290u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x113294: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x113294u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x113298: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x113298u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x11329c: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x11329cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1132a0: 0xc043f84  jal         func_10FE10
    ctx->pc = 0x1132A0u;
    SET_GPR_U32(ctx, 31, 0x1132A8u);
    ctx->pc = 0x1132A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1132A0u;
    // 0x1132a4: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10FE10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10FE10u, 0x1132A0u, 0x1132A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1132A8u;
label_1132a8:
    // 0x1132a8: 0x8e030010  lw          $v1, 0x10($s0)
    ctx->pc = 0x1132a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x1132ac: 0x3c020049  lui         $v0, 0x49
    ctx->pc = 0x1132acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)73 << 16));
    // 0x1132b0: 0x24429a08  addiu       $v0, $v0, -0x65F8
    ctx->pc = 0x1132b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941192));
    // 0x1132b4: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1132b4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1132b8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1132b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1132bc: 0x8c450108  lw          $a1, 0x108($v0)
    ctx->pc = 0x1132bcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 264)));
    // 0x1132c0: 0x50a00024  beql        $a1, $zero, . + 4 + (0x24 << 2)
    ctx->pc = 0x1132C0u;
    {
        const bool branch_taken_0x1132c0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x1132c0) {
            ctx->pc = 0x1132C4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1132C0u;
            // 0x1132c4: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x113354u;
            goto label_113354;
        }
    }
    ctx->pc = 0x1132C8u;
    // 0x1132c8: 0xdca41020  ld          $a0, 0x1020($a1)
    ctx->pc = 0x1132c8u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 5), 4128)));
    // 0x1132cc: 0x34068000  ori         $a2, $zero, 0x8000
    ctx->pc = 0x1132ccu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x1132d0: 0x63778  dsll        $a2, $a2, 29
    ctx->pc = 0x1132d0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << 29);
    // 0x1132d4: 0x861024  and         $v0, $a0, $a2
    ctx->pc = 0x1132d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 6));
    // 0x1132d8: 0x5440001c  bnel        $v0, $zero, . + 4 + (0x1C << 2)
    ctx->pc = 0x1132D8u;
    {
        const bool branch_taken_0x1132d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1132d8) {
            ctx->pc = 0x1132DCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1132D8u;
            // 0x1132dc: 0xae000118  sw          $zero, 0x118($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 280), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x11334Cu;
            goto label_11334c;
        }
    }
    ctx->pc = 0x1132E0u;
    // 0x1132e0: 0x34028000  ori         $v0, $zero, 0x8000
    ctx->pc = 0x1132e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x1132e4: 0x21538  dsll        $v0, $v0, 20
    ctx->pc = 0x1132e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 20);
    // 0x1132e8: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x1132e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x1132ec: 0x5040000d  beql        $v0, $zero, . + 4 + (0xD << 2)
    ctx->pc = 0x1132ECu;
    {
        const bool branch_taken_0x1132ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1132ec) {
            ctx->pc = 0x1132F0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1132ECu;
            // 0x1132f0: 0xdca31020  ld          $v1, 0x1020($a1) (Delay Slot)
            SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 5), 4128)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x113324u;
            goto label_113324;
        }
    }
    ctx->pc = 0x1132F4u;
    // 0x1132f4: 0x3c02bfff  lui         $v0, 0xBFFF
    ctx->pc = 0x1132f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49151 << 16));
    // 0x1132f8: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x1132f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x1132fc: 0x21178  dsll        $v0, $v0, 5
    ctx->pc = 0x1132fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 5);
    // 0x113300: 0x3442001f  ori         $v0, $v0, 0x1F
    ctx->pc = 0x113300u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)31);
    // 0x113304: 0x3c03bfff  lui         $v1, 0xBFFF
    ctx->pc = 0x113304u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49151 << 16));
    // 0x113308: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x113308u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x11330c: 0x319b8  dsll        $v1, $v1, 6
    ctx->pc = 0x11330cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 6);
    // 0x113310: 0x3463003f  ori         $v1, $v1, 0x3F
    ctx->pc = 0x113310u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)63);
    // 0x113314: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x113314u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x113318: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x113318u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x11331c: 0xfca21020  sd          $v0, 0x1020($a1)
    ctx->pc = 0x11331cu;
    WRITE64(ADD32(GPR_U32(ctx, 5), 4128), GPR_U64(ctx, 2));
    // 0x113320: 0xdca31020  ld          $v1, 0x1020($a1)
    ctx->pc = 0x113320u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 5), 4128)));
label_113324:
    // 0x113324: 0x661024  and         $v0, $v1, $a2
    ctx->pc = 0x113324u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 6));
    // 0x113328: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x113328u;
    {
        const bool branch_taken_0x113328 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x113328) {
            ctx->pc = 0x11332Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x113328u;
            // 0x11332c: 0xae000118  sw          $zero, 0x118($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 280), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x11334Cu;
            goto label_11334c;
        }
    }
    ctx->pc = 0x113330u;
    // 0x113330: 0x3c02bfff  lui         $v0, 0xBFFF
    ctx->pc = 0x113330u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49151 << 16));
    // 0x113334: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x113334u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x113338: 0x211b8  dsll        $v0, $v0, 6
    ctx->pc = 0x113338u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 6);
    // 0x11333c: 0x3442003f  ori         $v0, $v0, 0x3F
    ctx->pc = 0x11333cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)63);
    // 0x113340: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x113340u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x113344: 0xfca21020  sd          $v0, 0x1020($a1)
    ctx->pc = 0x113344u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 4128), GPR_U64(ctx, 2));
    // 0x113348: 0xae000118  sw          $zero, 0x118($s0)
    ctx->pc = 0x113348u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 280), GPR_U32(ctx, 0));
label_11334c:
    // 0x11334c: 0xae000110  sw          $zero, 0x110($s0)
    ctx->pc = 0x11334cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 272), GPR_U32(ctx, 0));
    // 0x113350: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x113350u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_113354:
    // 0x113354: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x113354u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x113358: 0x3e00008  jr          $ra
    ctx->pc = 0x113358u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11335Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x113358u;
        // 0x11335c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x113358u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x113360u;
}
