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

// Function: sub_003461E8
// Address: 0x3461e8 - 0x346288
void sub_003461E8_0x3461e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003461E8_0x3461e8");
#endif

    ctx->pc = 0x3461e8u;

    // 0x3461e8: 0x8c820118  lw          $v0, 0x118($a0)
    ctx->pc = 0x3461e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 280)));
    // 0x3461ec: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x3461ecu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x3461f0: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x3461f0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3461f4: 0x24060060  addiu       $a2, $zero, 0x60
    ctx->pc = 0x3461f4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
    // 0x3461f8: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x3461f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x3461fc: 0xa62818  mult        $a1, $a1, $a2
    ctx->pc = 0x3461fcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x346200: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x346200u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x346204: 0xac470018  sw          $a3, 0x18($v0)
    ctx->pc = 0x346204u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 24), GPR_U32(ctx, 7));
    // 0x346208: 0x8c830124  lw          $v1, 0x124($a0)
    ctx->pc = 0x346208u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 292)));
    // 0x34620c: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x34620cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x346210: 0xa060000b  sb          $zero, 0xB($v1)
    ctx->pc = 0x346210u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 11), (uint8_t)GPR_U32(ctx, 0));
    // 0x346214: 0xa0600008  sb          $zero, 0x8($v1)
    ctx->pc = 0x346214u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 8), (uint8_t)GPR_U32(ctx, 0));
    // 0x346218: 0xa0600009  sb          $zero, 0x9($v1)
    ctx->pc = 0x346218u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 9), (uint8_t)GPR_U32(ctx, 0));
    // 0x34621c: 0xa060000a  sb          $zero, 0xA($v1)
    ctx->pc = 0x34621cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 10), (uint8_t)GPR_U32(ctx, 0));
    // 0x346220: 0x8c820124  lw          $v0, 0x124($a0)
    ctx->pc = 0x346220u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 292)));
    // 0x346224: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x346224u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x346228: 0x24420018  addiu       $v0, $v0, 0x18
    ctx->pc = 0x346228u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 24));
    // 0x34622c: 0xa040000b  sb          $zero, 0xB($v0)
    ctx->pc = 0x34622cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 11), (uint8_t)GPR_U32(ctx, 0));
    // 0x346230: 0xa0400008  sb          $zero, 0x8($v0)
    ctx->pc = 0x346230u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 8), (uint8_t)GPR_U32(ctx, 0));
    // 0x346234: 0xa0400009  sb          $zero, 0x9($v0)
    ctx->pc = 0x346234u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 9), (uint8_t)GPR_U32(ctx, 0));
    // 0x346238: 0xa040000a  sb          $zero, 0xA($v0)
    ctx->pc = 0x346238u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 10), (uint8_t)GPR_U32(ctx, 0));
    // 0x34623c: 0x8c830124  lw          $v1, 0x124($a0)
    ctx->pc = 0x34623cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 292)));
    // 0x346240: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x346240u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x346244: 0x24630030  addiu       $v1, $v1, 0x30
    ctx->pc = 0x346244u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 48));
    // 0x346248: 0xa060000b  sb          $zero, 0xB($v1)
    ctx->pc = 0x346248u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 11), (uint8_t)GPR_U32(ctx, 0));
    // 0x34624c: 0xa0600008  sb          $zero, 0x8($v1)
    ctx->pc = 0x34624cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 8), (uint8_t)GPR_U32(ctx, 0));
    // 0x346250: 0xa0600009  sb          $zero, 0x9($v1)
    ctx->pc = 0x346250u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 9), (uint8_t)GPR_U32(ctx, 0));
    // 0x346254: 0xa060000a  sb          $zero, 0xA($v1)
    ctx->pc = 0x346254u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 10), (uint8_t)GPR_U32(ctx, 0));
    // 0x346258: 0x8c820124  lw          $v0, 0x124($a0)
    ctx->pc = 0x346258u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 292)));
    // 0x34625c: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x34625cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x346260: 0x24a50048  addiu       $a1, $a1, 0x48
    ctx->pc = 0x346260u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 72));
    // 0x346264: 0xa0a0000b  sb          $zero, 0xB($a1)
    ctx->pc = 0x346264u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 11), (uint8_t)GPR_U32(ctx, 0));
    // 0x346268: 0xa0a00008  sb          $zero, 0x8($a1)
    ctx->pc = 0x346268u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 8), (uint8_t)GPR_U32(ctx, 0));
    // 0x34626c: 0xa0a00009  sb          $zero, 0x9($a1)
    ctx->pc = 0x34626cu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 9), (uint8_t)GPR_U32(ctx, 0));
    // 0x346270: 0xa0a0000a  sb          $zero, 0xA($a1)
    ctx->pc = 0x346270u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 10), (uint8_t)GPR_U32(ctx, 0));
    // 0x346274: 0x8c8200dc  lw          $v0, 0xDC($a0)
    ctx->pc = 0x346274u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 220)));
    // 0x346278: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x346278u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x34627c: 0x3e00008  jr          $ra
    ctx->pc = 0x34627Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x346280u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34627Cu;
        // 0x346280: 0xac8200dc  sw          $v0, 0xDC($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 220), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x34627Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x346284u;
    // 0x346284: 0x0  nop
    ctx->pc = 0x346284u;
    // NOP
    ctx->pc = 0x346288u;
}
