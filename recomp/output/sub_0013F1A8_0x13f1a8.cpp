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

// Function: sub_0013F1A8
// Address: 0x13f1a8 - 0x13f258
void sub_0013F1A8_0x13f1a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0013F1A8_0x13f1a8");
#endif

    switch (ctx->pc) {
        case 0x13f1a8u: goto label_13f1a8;
        case 0x13f1acu: goto label_13f1ac;
        case 0x13f1b0u: goto label_13f1b0;
        case 0x13f1b4u: goto label_13f1b4;
        case 0x13f1b8u: goto label_13f1b8;
        case 0x13f1bcu: goto label_13f1bc;
        case 0x13f1c0u: goto label_13f1c0;
        case 0x13f1c4u: goto label_13f1c4;
        case 0x13f1c8u: goto label_13f1c8;
        case 0x13f1ccu: goto label_13f1cc;
        case 0x13f1d0u: goto label_13f1d0;
        case 0x13f1d4u: goto label_13f1d4;
        case 0x13f1d8u: goto label_13f1d8;
        case 0x13f1dcu: goto label_13f1dc;
        case 0x13f1e0u: goto label_13f1e0;
        case 0x13f1e4u: goto label_13f1e4;
        case 0x13f1e8u: goto label_13f1e8;
        case 0x13f1ecu: goto label_13f1ec;
        case 0x13f1f0u: goto label_13f1f0;
        case 0x13f1f4u: goto label_13f1f4;
        case 0x13f1f8u: goto label_13f1f8;
        case 0x13f1fcu: goto label_13f1fc;
        case 0x13f200u: goto label_13f200;
        case 0x13f204u: goto label_13f204;
        case 0x13f208u: goto label_13f208;
        case 0x13f20cu: goto label_13f20c;
        case 0x13f210u: goto label_13f210;
        case 0x13f214u: goto label_13f214;
        case 0x13f218u: goto label_13f218;
        case 0x13f21cu: goto label_13f21c;
        case 0x13f220u: goto label_13f220;
        case 0x13f224u: goto label_13f224;
        case 0x13f228u: goto label_13f228;
        case 0x13f22cu: goto label_13f22c;
        case 0x13f230u: goto label_13f230;
        case 0x13f234u: goto label_13f234;
        case 0x13f238u: goto label_13f238;
        case 0x13f23cu: goto label_13f23c;
        case 0x13f240u: goto label_13f240;
        case 0x13f244u: goto label_13f244;
        case 0x13f248u: goto label_13f248;
        case 0x13f24cu: goto label_13f24c;
        case 0x13f250u: goto label_13f250;
        case 0x13f254u: goto label_13f254;
        default: break;
    }

    ctx->pc = 0x13f1a8u;

label_13f1a8:
    // 0x13f1a8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x13f1a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_13f1ac:
    // 0x13f1ac: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x13f1acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_13f1b0:
    // 0x13f1b0: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x13f1b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_13f1b4:
    // 0x13f1b4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x13f1b4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_13f1b8:
    // 0x13f1b8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x13f1b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_13f1bc:
    // 0x13f1bc: 0x92020009  lbu         $v0, 0x9($s0)
    ctx->pc = 0x13f1bcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 9)));
label_13f1c0:
    // 0x13f1c0: 0x50400021  beql        $v0, $zero, . + 4 + (0x21 << 2)
label_13f1c4:
    if (ctx->pc == 0x13F1C4u) {
        ctx->pc = 0x13F1C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13F1C0u;
        // 0x13f1c4: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13F1C8u;
        goto label_13f1c8;
    }
    ctx->pc = 0x13F1C0u;
    {
        const bool branch_taken_0x13f1c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x13f1c0) {
            ctx->pc = 0x13F1C4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x13F1C0u;
            // 0x13f1c4: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x13F248u;
            goto label_13f248;
        }
    }
    ctx->pc = 0x13F1C8u;
label_13f1c8:
    // 0x13f1c8: 0xc04db02  jal         func_136C08
label_13f1cc:
    if (ctx->pc == 0x13F1CCu) {
        ctx->pc = 0x13F1CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13F1C8u;
        // 0x13f1cc: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13F1D0u;
        goto label_13f1d0;
    }
    ctx->pc = 0x13F1C8u;
    SET_GPR_U32(ctx, 31, 0x13F1D0u);
    ctx->pc = 0x13F1CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13F1C8u;
    // 0x13f1cc: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x136C08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x136C08u, 0x13F1C8u, 0x13F1D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13F1D0u;
label_13f1d0:
    // 0x13f1d0: 0x10000003  b           . + 4 + (0x3 << 2)
label_13f1d4:
    if (ctx->pc == 0x13F1D4u) {
        ctx->pc = 0x13F1D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13F1D0u;
        // 0x13f1d4: 0xa200046c  sb          $zero, 0x46C($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 1132), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13F1D8u;
        goto label_13f1d8;
    }
    ctx->pc = 0x13F1D0u;
    {
        const bool branch_taken_0x13f1d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13F1D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13F1D0u;
        // 0x13f1d4: 0xa200046c  sb          $zero, 0x46C($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 1132), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13f1d0) {
            ctx->pc = 0x13F1E0u;
            goto label_13f1e0;
        }
    }
    ctx->pc = 0x13F1D8u;
label_13f1d8:
    // 0x13f1d8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x13f1d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_13f1dc:
    // 0x13f1dc: 0xa202046c  sb          $v0, 0x46C($s0)
    ctx->pc = 0x13f1dcu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1132), (uint8_t)GPR_U32(ctx, 2));
label_13f1e0:
    // 0x13f1e0: 0x9202046c  lbu         $v0, 0x46C($s0)
    ctx->pc = 0x13f1e0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1132)));
label_13f1e4:
    // 0x13f1e4: 0x2c420010  sltiu       $v0, $v0, 0x10
    ctx->pc = 0x13f1e4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
label_13f1e8:
    // 0x13f1e8: 0x50400013  beql        $v0, $zero, . + 4 + (0x13 << 2)
label_13f1ec:
    if (ctx->pc == 0x13F1ECu) {
        ctx->pc = 0x13F1ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13F1E8u;
        // 0x13f1ec: 0x8e03000c  lw          $v1, 0xC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13F1F0u;
        goto label_13f1f0;
    }
    ctx->pc = 0x13F1E8u;
    {
        const bool branch_taken_0x13f1e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x13f1e8) {
            ctx->pc = 0x13F1ECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x13F1E8u;
            // 0x13f1ec: 0x8e03000c  lw          $v1, 0xC($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x13F238u;
            goto label_13f238;
        }
    }
    ctx->pc = 0x13F1F0u;
label_13f1f0:
    // 0x13f1f0: 0x9202046c  lbu         $v0, 0x46C($s0)
    ctx->pc = 0x13f1f0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1132)));
label_13f1f4:
    // 0x13f1f4: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x13f1f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_13f1f8:
    // 0x13f1f8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x13f1f8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_13f1fc:
    // 0x13f1fc: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x13f1fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_13f200:
    // 0x13f200: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x13f200u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_13f204:
    // 0x13f204: 0x5060fff4  beql        $v1, $zero, . + 4 + (-0xC << 2)
label_13f208:
    if (ctx->pc == 0x13F208u) {
        ctx->pc = 0x13F208u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13F204u;
        // 0x13f208: 0x9202046c  lbu         $v0, 0x46C($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1132)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13F20Cu;
        goto label_13f20c;
    }
    ctx->pc = 0x13F204u;
    {
        const bool branch_taken_0x13f204 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x13f204) {
            ctx->pc = 0x13F208u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x13F204u;
            // 0x13f208: 0x9202046c  lbu         $v0, 0x46C($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1132)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x13F1D8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_13f1d8;
        }
    }
    ctx->pc = 0x13F20Cu;
label_13f20c:
    // 0x13f20c: 0xc04fd04  jal         func_13F410
label_13f210:
    if (ctx->pc == 0x13F210u) {
        ctx->pc = 0x13F210u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13F20Cu;
        // 0x13f210: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13F214u;
        goto label_13f214;
    }
    ctx->pc = 0x13F20Cu;
    SET_GPR_U32(ctx, 31, 0x13F214u);
    ctx->pc = 0x13F210u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13F20Cu;
    // 0x13f210: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13F410u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13F410u, 0x13F20Cu, 0x13F214u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13F214u;
label_13f214:
    // 0x13f214: 0x8e050620  lw          $a1, 0x620($s0)
    ctx->pc = 0x13f214u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1568)));
label_13f218:
    // 0x13f218: 0xc04d80c  jal         func_136030
label_13f21c:
    if (ctx->pc == 0x13F21Cu) {
        ctx->pc = 0x13F21Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13F218u;
        // 0x13f21c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13F220u;
        goto label_13f220;
    }
    ctx->pc = 0x13F218u;
    SET_GPR_U32(ctx, 31, 0x13F220u);
    ctx->pc = 0x13F21Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13F218u;
    // 0x13f21c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x136030u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x136030u, 0x13F218u, 0x13F220u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13F220u;
label_13f220:
    // 0x13f220: 0x26220001  addiu       $v0, $s1, 0x1
    ctx->pc = 0x13f220u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_13f224:
    // 0x13f224: 0x92030009  lbu         $v1, 0x9($s0)
    ctx->pc = 0x13f224u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 9)));
label_13f228:
    // 0x13f228: 0x305100ff  andi        $s1, $v0, 0xFF
    ctx->pc = 0x13f228u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_13f22c:
    // 0x13f22c: 0x5623ffea  bnel        $s1, $v1, . + 4 + (-0x16 << 2)
label_13f230:
    if (ctx->pc == 0x13F230u) {
        ctx->pc = 0x13F230u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13F22Cu;
        // 0x13f230: 0x9202046c  lbu         $v0, 0x46C($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1132)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13F234u;
        goto label_13f234;
    }
    ctx->pc = 0x13F22Cu;
    {
        const bool branch_taken_0x13f22c = (GPR_U64(ctx, 17) != GPR_U64(ctx, 3));
        if (branch_taken_0x13f22c) {
            ctx->pc = 0x13F230u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x13F22Cu;
            // 0x13f230: 0x9202046c  lbu         $v0, 0x46C($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1132)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x13F1D8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_13f1d8;
        }
    }
    ctx->pc = 0x13F234u;
label_13f234:
    // 0x13f234: 0x8e03000c  lw          $v1, 0xC($s0)
    ctx->pc = 0x13f234u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_13f238:
    // 0x13f238: 0x8c620028  lw          $v0, 0x28($v1)
    ctx->pc = 0x13f238u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 40)));
label_13f23c:
    // 0x13f23c: 0x40f809  jalr        $v0
label_13f240:
    if (ctx->pc == 0x13F240u) {
        ctx->pc = 0x13F240u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13F23Cu;
        // 0x13f240: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13F244u;
        goto label_13f244;
    }
    ctx->pc = 0x13F23Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x13F244u);
        ctx->pc = 0x13F240u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13F23Cu;
        // 0x13f240: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13F23Cu, 0x13F244u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x13F244u;
label_13f244:
    // 0x13f244: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x13f244u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_13f248:
    // 0x13f248: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x13f248u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_13f24c:
    // 0x13f24c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x13f24cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_13f250:
    // 0x13f250: 0x3e00008  jr          $ra
label_13f254:
    if (ctx->pc == 0x13F254u) {
        ctx->pc = 0x13F254u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13F250u;
        // 0x13f254: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13F258u;
        goto label_fallthrough_0x13f250;
    }
    ctx->pc = 0x13F250u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13F254u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13F250u;
        // 0x13f254: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13F250u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x13f250:
    ctx->pc = 0x13F258u;
}
