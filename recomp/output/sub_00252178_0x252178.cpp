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

// Function: sub_00252178
// Address: 0x252178 - 0x2523d8
void sub_00252178_0x252178(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00252178_0x252178");
#endif

    switch (ctx->pc) {
        case 0x252190u: goto label_252190;
        case 0x2521f0u: goto label_2521f0;
        case 0x252210u: goto label_252210;
        case 0x252220u: goto label_252220;
        case 0x252238u: goto label_252238;
        case 0x252274u: goto label_252274;
        case 0x25227cu: goto label_25227c;
        case 0x25228cu: goto label_25228c;
        case 0x2522c8u: goto label_2522c8;
        case 0x2522e0u: goto label_2522e0;
        case 0x25231cu: goto label_25231c;
        case 0x252334u: goto label_252334;
        case 0x252370u: goto label_252370;
        case 0x252388u: goto label_252388;
        case 0x2523c4u: goto label_2523c4;
        default: break;
    }

    ctx->pc = 0x252178u;

    // 0x252178: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x252178u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x25217c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x25217cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x252180: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x252180u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x252184: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x252184u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x252188: 0xc06dc8e  jal         func_1B7238
    ctx->pc = 0x252188u;
    SET_GPR_U32(ctx, 31, 0x252190u);
    ctx->pc = 0x25218Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x252188u;
    // 0x25218c: 0x8e040ff0  lw          $a0, 0xFF0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4080)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7238u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7238u, 0x252188u, 0x252190u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x252190u;
label_252190:
    // 0x252190: 0x10400021  beqz        $v0, . + 4 + (0x21 << 2)
    ctx->pc = 0x252190u;
    {
        const bool branch_taken_0x252190 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x252190) {
            ctx->pc = 0x252218u;
            goto label_252218;
        }
    }
    ctx->pc = 0x252198u;
    // 0x252198: 0xde031020  ld          $v1, 0x1020($s0)
    ctx->pc = 0x252198u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 16), 4128)));
    // 0x25219c: 0x34028000  ori         $v0, $zero, 0x8000
    ctx->pc = 0x25219cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x2521a0: 0x21778  dsll        $v0, $v0, 29
    ctx->pc = 0x2521a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 29);
    // 0x2521a4: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x2521a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x2521a8: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x2521A8u;
    {
        const bool branch_taken_0x2521a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2521a8) {
            ctx->pc = 0x2521ACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2521A8u;
            // 0x2521ac: 0x8e030334  lw          $v1, 0x334($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 820)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2521CCu;
            goto label_2521cc;
        }
    }
    ctx->pc = 0x2521B0u;
    // 0x2521b0: 0x3c02bfff  lui         $v0, 0xBFFF
    ctx->pc = 0x2521b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49151 << 16));
    // 0x2521b4: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x2521b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x2521b8: 0x211b8  dsll        $v0, $v0, 6
    ctx->pc = 0x2521b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 6);
    // 0x2521bc: 0x3442003f  ori         $v0, $v0, 0x3F
    ctx->pc = 0x2521bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)63);
    // 0x2521c0: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x2521c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x2521c4: 0xfe021020  sd          $v0, 0x1020($s0)
    ctx->pc = 0x2521c4u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 4128), GPR_U64(ctx, 2));
    // 0x2521c8: 0x8e030334  lw          $v1, 0x334($s0)
    ctx->pc = 0x2521c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 820)));
label_2521cc:
    // 0x2521cc: 0x24040031  addiu       $a0, $zero, 0x31
    ctx->pc = 0x2521ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 49));
    // 0x2521d0: 0x8c62014c  lw          $v0, 0x14C($v1)
    ctx->pc = 0x2521d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 332)));
    // 0x2521d4: 0x50440008  beql        $v0, $a0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2521D4u;
    {
        const bool branch_taken_0x2521d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 4));
        if (branch_taken_0x2521d4) {
            ctx->pc = 0x2521D8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2521D4u;
            // 0x2521d8: 0x8e040338  lw          $a0, 0x338($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 824)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2521F8u;
            goto label_2521f8;
        }
    }
    ctx->pc = 0x2521DCu;
    // 0x2521dc: 0x8c620150  lw          $v0, 0x150($v1)
    ctx->pc = 0x2521dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 336)));
    // 0x2521e0: 0x50440005  beql        $v0, $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2521E0u;
    {
        const bool branch_taken_0x2521e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 4));
        if (branch_taken_0x2521e0) {
            ctx->pc = 0x2521E4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2521E0u;
            // 0x2521e4: 0x8e040338  lw          $a0, 0x338($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 824)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2521F8u;
            goto label_2521f8;
        }
    }
    ctx->pc = 0x2521E8u;
    // 0x2521e8: 0xc0954f8  jal         func_2553E0
    ctx->pc = 0x2521E8u;
    SET_GPR_U32(ctx, 31, 0x2521F0u);
    ctx->pc = 0x2521ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2521E8u;
    // 0x2521ec: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2553E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2553E0u, 0x2521E8u, 0x2521F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2521F0u;
label_2521f0:
    // 0x2521f0: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x2521F0u;
    {
        const bool branch_taken_0x2521f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2521F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2521F0u;
        // 0x2521f4: 0x8e020ff0  lw          $v0, 0xFF0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4080)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2521f0) {
            ctx->pc = 0x252224u;
            goto label_252224;
        }
    }
    ctx->pc = 0x2521F8u;
label_2521f8:
    // 0x2521f8: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x2521f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2521fc: 0x8c820084  lw          $v0, 0x84($a0)
    ctx->pc = 0x2521fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 132)));
    // 0x252200: 0x54430008  bnel        $v0, $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x252200u;
    {
        const bool branch_taken_0x252200 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x252200) {
            ctx->pc = 0x252204u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x252200u;
            // 0x252204: 0x8e020ff0  lw          $v0, 0xFF0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4080)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x252224u;
            goto label_252224;
        }
    }
    ctx->pc = 0x252208u;
    // 0x252208: 0xc06b9c0  jal         func_1AE700
    ctx->pc = 0x252208u;
    SET_GPR_U32(ctx, 31, 0x252210u);
    ctx->pc = 0x1AE700u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AE700u, 0x252208u, 0x252210u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x252210u;
label_252210:
    // 0x252210: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x252210u;
    {
        const bool branch_taken_0x252210 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x252214u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x252210u;
        // 0x252214: 0x8e020ff0  lw          $v0, 0xFF0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4080)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x252210) {
            ctx->pc = 0x252224u;
            goto label_252224;
        }
    }
    ctx->pc = 0x252218u;
label_252218:
    // 0x252218: 0xc0954fc  jal         func_2553F0
    ctx->pc = 0x252218u;
    SET_GPR_U32(ctx, 31, 0x252220u);
    ctx->pc = 0x25221Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x252218u;
    // 0x25221c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2553F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2553F0u, 0x252218u, 0x252220u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x252220u;
label_252220:
    // 0x252220: 0x8e020ff0  lw          $v0, 0xFF0($s0)
    ctx->pc = 0x252220u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4080)));
label_252224:
    // 0x252224: 0x8c4300d4  lw          $v1, 0xD4($v0)
    ctx->pc = 0x252224u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 212)));
    // 0x252228: 0x10600010  beqz        $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x252228u;
    {
        const bool branch_taken_0x252228 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x252228) {
            ctx->pc = 0x25226Cu;
            goto label_25226c;
        }
    }
    ctx->pc = 0x252230u;
    // 0x252230: 0xc0954dc  jal         func_255370
    ctx->pc = 0x252230u;
    SET_GPR_U32(ctx, 31, 0x252238u);
    ctx->pc = 0x252234u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x252230u;
    // 0x252234: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x255370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x255370u, 0x252230u, 0x252238u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x252238u;
label_252238:
    // 0x252238: 0xde031020  ld          $v1, 0x1020($s0)
    ctx->pc = 0x252238u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 16), 4128)));
    // 0x25223c: 0x34028000  ori         $v0, $zero, 0x8000
    ctx->pc = 0x25223cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x252240: 0x21778  dsll        $v0, $v0, 29
    ctx->pc = 0x252240u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 29);
    // 0x252244: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x252244u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x252248: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x252248u;
    {
        const bool branch_taken_0x252248 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x252248) {
            ctx->pc = 0x252274u;
            goto label_252274;
        }
    }
    ctx->pc = 0x252250u;
    // 0x252250: 0x3c02bfff  lui         $v0, 0xBFFF
    ctx->pc = 0x252250u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49151 << 16));
    // 0x252254: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x252254u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x252258: 0x211b8  dsll        $v0, $v0, 6
    ctx->pc = 0x252258u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 6);
    // 0x25225c: 0x3442003f  ori         $v0, $v0, 0x3F
    ctx->pc = 0x25225cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)63);
    // 0x252260: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x252260u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x252264: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x252264u;
    {
        const bool branch_taken_0x252264 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x252268u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x252264u;
        // 0x252268: 0xfe021020  sd          $v0, 0x1020($s0) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 16), 4128), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x252264) {
            ctx->pc = 0x252274u;
            goto label_252274;
        }
    }
    ctx->pc = 0x25226Cu;
label_25226c:
    // 0x25226c: 0xc0954e0  jal         func_255380
    ctx->pc = 0x25226Cu;
    SET_GPR_U32(ctx, 31, 0x252274u);
    ctx->pc = 0x252270u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25226Cu;
    // 0x252270: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x255380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x255380u, 0x25226Cu, 0x252274u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x252274u;
label_252274:
    // 0x252274: 0xc06dcaa  jal         func_1B72A8
    ctx->pc = 0x252274u;
    SET_GPR_U32(ctx, 31, 0x25227Cu);
    ctx->pc = 0x252278u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x252274u;
    // 0x252278: 0x8e040ff0  lw          $a0, 0xFF0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4080)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B72A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B72A8u, 0x252274u, 0x25227Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25227Cu;
label_25227c:
    // 0x25227c: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x25227Cu;
    {
        const bool branch_taken_0x25227c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x25227c) {
            ctx->pc = 0x2522C0u;
            goto label_2522c0;
        }
    }
    ctx->pc = 0x252284u;
    // 0x252284: 0xc095500  jal         func_255400
    ctx->pc = 0x252284u;
    SET_GPR_U32(ctx, 31, 0x25228Cu);
    ctx->pc = 0x252288u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x252284u;
    // 0x252288: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x255400u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x255400u, 0x252284u, 0x25228Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25228Cu;
label_25228c:
    // 0x25228c: 0xde031020  ld          $v1, 0x1020($s0)
    ctx->pc = 0x25228cu;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 16), 4128)));
    // 0x252290: 0x34028000  ori         $v0, $zero, 0x8000
    ctx->pc = 0x252290u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x252294: 0x21778  dsll        $v0, $v0, 29
    ctx->pc = 0x252294u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 29);
    // 0x252298: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x252298u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x25229c: 0x5440000b  bnel        $v0, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x25229Cu;
    {
        const bool branch_taken_0x25229c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x25229c) {
            ctx->pc = 0x2522A0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x25229Cu;
            // 0x2522a0: 0x8e020ff0  lw          $v0, 0xFF0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4080)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2522CCu;
            goto label_2522cc;
        }
    }
    ctx->pc = 0x2522A4u;
    // 0x2522a4: 0x3c02bfff  lui         $v0, 0xBFFF
    ctx->pc = 0x2522a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49151 << 16));
    // 0x2522a8: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x2522a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x2522ac: 0x211b8  dsll        $v0, $v0, 6
    ctx->pc = 0x2522acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 6);
    // 0x2522b0: 0x3442003f  ori         $v0, $v0, 0x3F
    ctx->pc = 0x2522b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)63);
    // 0x2522b4: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x2522b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x2522b8: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2522B8u;
    {
        const bool branch_taken_0x2522b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2522BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2522B8u;
        // 0x2522bc: 0xfe021020  sd          $v0, 0x1020($s0) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 16), 4128), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2522b8) {
            ctx->pc = 0x2522C8u;
            goto label_2522c8;
        }
    }
    ctx->pc = 0x2522C0u;
label_2522c0:
    // 0x2522c0: 0xc095504  jal         func_255410
    ctx->pc = 0x2522C0u;
    SET_GPR_U32(ctx, 31, 0x2522C8u);
    ctx->pc = 0x2522C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2522C0u;
    // 0x2522c4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x255410u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x255410u, 0x2522C0u, 0x2522C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2522C8u;
label_2522c8:
    // 0x2522c8: 0x8e020ff0  lw          $v0, 0xFF0($s0)
    ctx->pc = 0x2522c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4080)));
label_2522cc:
    // 0x2522cc: 0x8c4300d0  lw          $v1, 0xD0($v0)
    ctx->pc = 0x2522ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 208)));
    // 0x2522d0: 0x10600010  beqz        $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x2522D0u;
    {
        const bool branch_taken_0x2522d0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2522d0) {
            ctx->pc = 0x252314u;
            goto label_252314;
        }
    }
    ctx->pc = 0x2522D8u;
    // 0x2522d8: 0xc0954e4  jal         func_255390
    ctx->pc = 0x2522D8u;
    SET_GPR_U32(ctx, 31, 0x2522E0u);
    ctx->pc = 0x2522DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2522D8u;
    // 0x2522dc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x255390u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x255390u, 0x2522D8u, 0x2522E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2522E0u;
label_2522e0:
    // 0x2522e0: 0xde031020  ld          $v1, 0x1020($s0)
    ctx->pc = 0x2522e0u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 16), 4128)));
    // 0x2522e4: 0x34028000  ori         $v0, $zero, 0x8000
    ctx->pc = 0x2522e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x2522e8: 0x21778  dsll        $v0, $v0, 29
    ctx->pc = 0x2522e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 29);
    // 0x2522ec: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x2522ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x2522f0: 0x5440000b  bnel        $v0, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x2522F0u;
    {
        const bool branch_taken_0x2522f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2522f0) {
            ctx->pc = 0x2522F4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2522F0u;
            // 0x2522f4: 0x8e020ff0  lw          $v0, 0xFF0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4080)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x252320u;
            goto label_252320;
        }
    }
    ctx->pc = 0x2522F8u;
    // 0x2522f8: 0x3c02bfff  lui         $v0, 0xBFFF
    ctx->pc = 0x2522f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49151 << 16));
    // 0x2522fc: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x2522fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x252300: 0x211b8  dsll        $v0, $v0, 6
    ctx->pc = 0x252300u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 6);
    // 0x252304: 0x3442003f  ori         $v0, $v0, 0x3F
    ctx->pc = 0x252304u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)63);
    // 0x252308: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x252308u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x25230c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x25230Cu;
    {
        const bool branch_taken_0x25230c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x252310u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25230Cu;
        // 0x252310: 0xfe021020  sd          $v0, 0x1020($s0) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 16), 4128), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25230c) {
            ctx->pc = 0x25231Cu;
            goto label_25231c;
        }
    }
    ctx->pc = 0x252314u;
label_252314:
    // 0x252314: 0xc0954e8  jal         func_2553A0
    ctx->pc = 0x252314u;
    SET_GPR_U32(ctx, 31, 0x25231Cu);
    ctx->pc = 0x252318u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x252314u;
    // 0x252318: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2553A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2553A0u, 0x252314u, 0x25231Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25231Cu;
label_25231c:
    // 0x25231c: 0x8e020ff0  lw          $v0, 0xFF0($s0)
    ctx->pc = 0x25231cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4080)));
label_252320:
    // 0x252320: 0x8c4300d8  lw          $v1, 0xD8($v0)
    ctx->pc = 0x252320u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 216)));
    // 0x252324: 0x10600010  beqz        $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x252324u;
    {
        const bool branch_taken_0x252324 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x252324) {
            ctx->pc = 0x252368u;
            goto label_252368;
        }
    }
    ctx->pc = 0x25232Cu;
    // 0x25232c: 0xc0954ea  jal         func_2553A8
    ctx->pc = 0x25232Cu;
    SET_GPR_U32(ctx, 31, 0x252334u);
    ctx->pc = 0x252330u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25232Cu;
    // 0x252330: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2553A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2553A8u, 0x25232Cu, 0x252334u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x252334u;
label_252334:
    // 0x252334: 0xde031020  ld          $v1, 0x1020($s0)
    ctx->pc = 0x252334u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 16), 4128)));
    // 0x252338: 0x34028000  ori         $v0, $zero, 0x8000
    ctx->pc = 0x252338u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x25233c: 0x21778  dsll        $v0, $v0, 29
    ctx->pc = 0x25233cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 29);
    // 0x252340: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x252340u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x252344: 0x5440000b  bnel        $v0, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x252344u;
    {
        const bool branch_taken_0x252344 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x252344) {
            ctx->pc = 0x252348u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x252344u;
            // 0x252348: 0x8e020ff0  lw          $v0, 0xFF0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4080)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x252374u;
            goto label_252374;
        }
    }
    ctx->pc = 0x25234Cu;
    // 0x25234c: 0x3c02bfff  lui         $v0, 0xBFFF
    ctx->pc = 0x25234cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49151 << 16));
    // 0x252350: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x252350u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x252354: 0x211b8  dsll        $v0, $v0, 6
    ctx->pc = 0x252354u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 6);
    // 0x252358: 0x3442003f  ori         $v0, $v0, 0x3F
    ctx->pc = 0x252358u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)63);
    // 0x25235c: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x25235cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x252360: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x252360u;
    {
        const bool branch_taken_0x252360 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x252364u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x252360u;
        // 0x252364: 0xfe021020  sd          $v0, 0x1020($s0) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 16), 4128), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x252360) {
            ctx->pc = 0x252370u;
            goto label_252370;
        }
    }
    ctx->pc = 0x252368u;
label_252368:
    // 0x252368: 0xc0954ee  jal         func_2553B8
    ctx->pc = 0x252368u;
    SET_GPR_U32(ctx, 31, 0x252370u);
    ctx->pc = 0x25236Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x252368u;
    // 0x25236c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2553B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2553B8u, 0x252368u, 0x252370u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x252370u;
label_252370:
    // 0x252370: 0x8e020ff0  lw          $v0, 0xFF0($s0)
    ctx->pc = 0x252370u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4080)));
label_252374:
    // 0x252374: 0x8c43021c  lw          $v1, 0x21C($v0)
    ctx->pc = 0x252374u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 540)));
    // 0x252378: 0x10600010  beqz        $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x252378u;
    {
        const bool branch_taken_0x252378 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x252378) {
            ctx->pc = 0x2523BCu;
            goto label_2523bc;
        }
    }
    ctx->pc = 0x252380u;
    // 0x252380: 0xc0954c6  jal         func_255318
    ctx->pc = 0x252380u;
    SET_GPR_U32(ctx, 31, 0x252388u);
    ctx->pc = 0x252384u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x252380u;
    // 0x252384: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x255318u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x255318u, 0x252380u, 0x252388u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x252388u;
label_252388:
    // 0x252388: 0xde031020  ld          $v1, 0x1020($s0)
    ctx->pc = 0x252388u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 16), 4128)));
    // 0x25238c: 0x34028000  ori         $v0, $zero, 0x8000
    ctx->pc = 0x25238cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x252390: 0x21778  dsll        $v0, $v0, 29
    ctx->pc = 0x252390u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 29);
    // 0x252394: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x252394u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x252398: 0x5440000b  bnel        $v0, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x252398u;
    {
        const bool branch_taken_0x252398 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x252398) {
            ctx->pc = 0x25239Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x252398u;
            // 0x25239c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2523C8u;
            goto label_2523c8;
        }
    }
    ctx->pc = 0x2523A0u;
    // 0x2523a0: 0x3c02bfff  lui         $v0, 0xBFFF
    ctx->pc = 0x2523a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49151 << 16));
    // 0x2523a4: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x2523a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x2523a8: 0x211b8  dsll        $v0, $v0, 6
    ctx->pc = 0x2523a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 6);
    // 0x2523ac: 0x3442003f  ori         $v0, $v0, 0x3F
    ctx->pc = 0x2523acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)63);
    // 0x2523b0: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x2523b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x2523b4: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2523B4u;
    {
        const bool branch_taken_0x2523b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2523B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2523B4u;
        // 0x2523b8: 0xfe021020  sd          $v0, 0x1020($s0) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 16), 4128), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2523b4) {
            ctx->pc = 0x2523C4u;
            goto label_2523c4;
        }
    }
    ctx->pc = 0x2523BCu;
label_2523bc:
    // 0x2523bc: 0xc0954ca  jal         func_255328
    ctx->pc = 0x2523BCu;
    SET_GPR_U32(ctx, 31, 0x2523C4u);
    ctx->pc = 0x2523C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2523BCu;
    // 0x2523c0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x255328u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x255328u, 0x2523BCu, 0x2523C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2523C4u;
label_2523c4:
    // 0x2523c4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2523c4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2523c8:
    // 0x2523c8: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x2523c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2523cc: 0x3e00008  jr          $ra
    ctx->pc = 0x2523CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2523D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2523CCu;
        // 0x2523d0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2523CCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2523D4u;
    // 0x2523d4: 0x0  nop
    ctx->pc = 0x2523d4u;
    // NOP
    ctx->pc = 0x2523d8u;
}
